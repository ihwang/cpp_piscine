#include "Form.hpp"

Form::Form(std::string name, int sign, int exec, std::string target = NULL, std::string type = NULL) : _name(name), _grade_sign(sign), _grade_exec(exec),
                                                                                                       _signed(false), _target(target), _type(type) {}

Form::Form(const Form &obj) : _name(obj._name), _grade_sign(obj._grade_sign),
                              _grade_exec(obj._grade_exec), _signed(obj._signed),
                              _target(obj._target), _type(obj._type) {}

Form::~Form(void) {}

Form &Form::operator=(const Form &obj)
{
    _signed = obj._signed;
    return (*this);
}

std::string Form::getName(void) const
{
    return (_name);
}

int Form::getGradeSign(void) const
{
    return (_grade_sign);
}

int Form::getGradeExec(void) const
{
    return (_grade_exec);
}

bool Form::getSigned(void) const
{
    return (_signed);
}

std::string Form::getTarget(void) const
{
    return (_target);
}

std::string Form::getType(void) const
{
    return (_type);
}

void Form::setTarget(std::string target)
{
    _target = target;
}

void Form::beSigned(Bureaucrat &obj)
{
    try
    {
        if (obj.getGrade() > _grade_sign)
            throw GradeTooLowException(obj.getName(), "to sign", this->getName());
        else if (obj.getGrade() < 1)
            throw GradeTooHighException(obj.getName());
        else
            _signed = true;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    std::string yesOrNo;

    if (obj.getSigned() == true)
        yesOrNo = "yes";
    else
        yesOrNo = "no";
    os << "Name : " << obj.getName() << std::endl
       << "Sign grade : " << obj.getGradeSign() << std::endl
       << "Execution grade : " << obj.getGradeExec() << std::endl
       << "Signed : " << yesOrNo;
    return (os);
}

Form::GradeTooHighException::GradeTooHighException(std::string name)
    : nameOfBureaucrat(name) {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException &
Form::GradeTooHighException::operator=(const GradeTooHighException &obj)
{
    nameOfBureaucrat = obj.nameOfBureaucrat;
    return (*this);
}

const char *
Form::GradeTooHighException::what(void) const throw()
{
    return ("This grade is too high to sign");
}

Form::GradeTooLowException::GradeTooLowException(std::string name, std::string todo, std::string form)
    : nameOfBureaucrat(name), optionToDo(todo), nameOfForm(form) {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException &
Form::GradeTooLowException::operator=(const GradeTooLowException &obj)
{
    nameOfBureaucrat = obj.nameOfBureaucrat;
    optionToDo = obj.optionToDo;
    nameOfForm = obj.nameOfForm;
    return (*this);
}

const char *
Form::GradeTooLowException::what() const throw()
{
    std::string print = nameOfBureaucrat + "'s grade is too low "
        + optionToDo + " " + nameOfForm;
    return (print.c_str());
}