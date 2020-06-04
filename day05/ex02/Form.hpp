#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    const int _grade_sign;
    const int _grade_exec;
    bool _signed;
    std::string _target;
    std::string _type;

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
        std::string nameOfForm;

    public:
        GradeTooLowException(std::string name, std::string todo, std::string form);
        GradeTooLowException(const GradeTooLowException &obj);
        virtual ~GradeTooLowException(void) throw();

        Form::GradeTooLowException &operator=(const GradeTooLowException &obj);
        virtual const char *what(void) const throw();
    };

    Form(std::string name, int sign, int exec, std::string target, std::string type);
    Form(const Form &obj);
    virtual ~Form(void);

    Form &operator=(const Form &obj);

    std::string getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool getSigned(void) const;
    std::string getTarget(void) const;
    std::string getType(void) const;

    void setTarget(std::string target);

    void beSigned(Bureaucrat &obj);

    virtual bool execute(Bureaucrat const& executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &obj);