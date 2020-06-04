#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
    setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    Name = obj.Name;
    setGrade(obj.Grade);
    return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return (Name);
}

int Bureaucrat::getGrade(void) const
{
    return (Grade);
}

void Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            Grade = grade;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::incrementGrade(void)
{
    setGrade(Grade - 1);
}

void Bureaucrat::decrementGrade(void)
{
    setGrade(Grade + 1);
}

void Bureaucrat::signForm(Form &obj)
{
    try
    {
        if (this->Grade < obj.getGradeExec())
            obj.beSigned(*this);
        else
        throw Form::GradeTooLowException(this->getName(), "to execute");
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << "<" << obj.getName() << ">, bureaucrat grade <" << obj.getGrade() << ">";
    return (os);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException &
Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &obj)
{
    (void)obj;
    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("This grade is too low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException &
Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &obj)
{
    (void)obj;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("This grade is too high");
}
