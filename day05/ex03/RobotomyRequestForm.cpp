#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;

RobotomyRequestForm::RobotomyRequestForm
(std::string name, std::string target = NULL)
    : Form(name, _sign, _exec, target, "Roboto") {}

RobotomyRequestForm::RobotomyRequestForm
(const RobotomyRequestForm& obj) : Form(obj) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    static_cast<void>(obj);
    return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (getSigned() == false || executor.getGrade() > getGradeExec())
            throw GradeTooLowException(executor.getName(), "to execute", this->getName());
        else
        {
            std::cout << "Drrrrr... " << getTarget()
                      << " has been successfuly robotomized.." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (false);
    }
    return (true);
}