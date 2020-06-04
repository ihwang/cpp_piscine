#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string Name;
    int Grade;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException(void);
        GradeTooHighException(const GradeTooHighException &obj);
        virtual ~GradeTooHighException(void) throw();

        GradeTooHighException &operator=(const GradeTooHighException &obj);

        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void);
        GradeTooLowException(const GradeTooLowException &obj);
        virtual ~GradeTooLowException(void) throw();

        GradeTooLowException &operator=(const GradeTooLowException &obj);

        virtual const char *what() const throw();
    };

    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat(void);

    Bureaucrat &operator=(const Bureaucrat &obj);

    std::string getName() const;
    int getGrade(void) const;
    void setGrade(int grade);

    void incrementGrade(void);
    void decrementGrade(void);

    void signForm(Form& obj);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);