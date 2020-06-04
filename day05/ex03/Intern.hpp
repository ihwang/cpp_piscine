#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    typedef struct  requestType
    {
        std::string type;
        Form*       (*make)(std::string, std::string);
    }               requestType;

    public:
        Intern(void);
        Intern(const Intern& obj);
        ~Intern(void);

        Intern& operator=(const Intern& obj);

        Form* makeForm(std::string formName, std::string target);
};