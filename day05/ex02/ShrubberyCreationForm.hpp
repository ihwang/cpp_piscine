#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        static const int _sign;
        static const int _exec;

    public:
        ShrubberyCreationForm(std::string name, std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

        virtual bool execute(Bureaucrat const& executor) const;
};