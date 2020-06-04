#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        static const int _sign;
        static const int _exec;

    public:
        PresidentialPardonForm(std::string name, std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        virtual ~PresidentialPardonForm(void);

        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

        virtual bool execute(Bureaucrat const& executor) const;
};