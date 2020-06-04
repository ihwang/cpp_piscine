#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    ShrubberyCreationForm a("form A", "foo");
    RobotomyRequestForm b("form B", "special foo");
    PresidentialPardonForm c("form C", "ultra foo");

    Bureaucrat ihwang("ihwang", 20);

    ihwang.signForm(a);
    ihwang.signForm(b);
    ihwang.signForm(c);

    ihwang.executeForm(a);
    ihwang.executeForm(b);
    ihwang.executeForm(c);


    return (0);
}