#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        static const int _sign;
        static const int _exec;

    public:
        RobotomyRequestForm(std::string name, std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        virtual ~RobotomyRequestForm(void);

        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

        virtual bool execute(Bureaucrat const& executor) const;
};