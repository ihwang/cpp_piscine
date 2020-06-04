#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form* f1;
    Form* f2;
    Form* f3;
    Form* f4;

    f1 = someRandomIntern.makeForm("robotomy request", "Bender");
    f2 = someRandomIntern.makeForm("shrubbery creation", "Bender");
    f3 = someRandomIntern.makeForm("presidential pardon", "Bender");

    f4 = someRandomIntern.makeForm("robotto", "Bender");

    delete f1;
    delete f2;
    delete f3;
    return (0);
}