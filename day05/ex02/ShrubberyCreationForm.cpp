#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm
(std::string name, std::string target = NULL)
    : Form(name, _sign, _exec, target, "Shrubbery") {}

ShrubberyCreationForm::ShrubberyCreationForm
(const ShrubberyCreationForm& obj) : Form(obj) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    static_cast<void>(obj);
    return (*this);
}

bool ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (getSigned() == false || executor.getGrade() > getGradeExec())
            throw GradeTooLowException(executor.getName(), "to execute", this->getName());
        else
        {
            std::ofstream ofs(getTarget());
            ofs << "\\        /" << std::endl
                << " \\      /" << std::endl
                << "  \\    /" << std::endl
                << "   \\  /" << std::endl
                << "    \\/" << std::endl
                << "    ||" << std::endl
                << "    ||" << std::endl
                << "    ||" << std::endl
                << "=============" << std::endl;
            ofs.close();
            std::cout << "A tree has been planted in " << getTarget() << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (false);
    }
    return (true);
}