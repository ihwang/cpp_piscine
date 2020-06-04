#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string _name;
    const int _grade_sign;
    const int _grade_exec;
    bool _signed;

public:
    class GradeTooHighException : public std::exception
    {
    private:
        std::string nameOfBureaucrat;

    public:
        GradeTooHighException(std::string name);
        GradeTooHighException(const GradeTooHighException &obj);
        virtual ~GradeTooHighException(void) throw();

        Form::GradeTooHighException &operator=(const GradeTooHighException &obj);
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
    private:
        std::string nameOfBureaucrat;
        std::string optionToDo;

    public:
        GradeTooLowException(std::string name, std::string todo);
        GradeTooLowException(const GradeTooLowException &obj);
        virtual ~GradeTooLowException(void) throw();

        Form::GradeTooLowException &operator=(const GradeTooLowException &obj);
        virtual const char *what(void) const throw();
    };

    Form(std::string name, int sign, int exec);
    Form(const Form &obj);
    ~Form(void);

    Form &operator=(const Form &obj);

    std::string getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool getSigned(void) const;
    void beSigned(Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &os, const Form &obj);