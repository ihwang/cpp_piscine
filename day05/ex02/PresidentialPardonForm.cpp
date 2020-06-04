#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm
(std::string name, std::string target = NULL)
    : Form(name, _sign, _exec, target, "Presidential Pardon") {}

PresidentialPardonForm::PresidentialPardonForm
(const PresidentialPardonForm& obj) : Form(obj) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&
PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    static_cast<void>(obj);
    return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (getSigned() == false || executor.getGrade() > getGradeExec())
            throw GradeTooLowException(executor.getName(), "to execute", this->getName());
        else
        {
            std::cout << getTarget()
                      << " has been pardoned by Zafod Beeblebrox" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (false);
    }
    return (true);
}