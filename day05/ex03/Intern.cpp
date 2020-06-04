#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& obj)
{
    (void)obj;
}

Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    return (*this);
}

Form* makeShrubbery(std::string name, std::string target)
{
    return (new ShrubberyCreationForm(name, target));
}

Form* makeRoboto(std::string name, std::string target)
{
    return (new RobotomyRequestForm(name, target));
}

Form* makePresidential(std::string name, std::string target)
{
    return (new PresidentialPardonForm(name, target));
}

Form* Intern::makeForm(std::string formName, std::string target)
{
    requestType type[3] =
    {
        {"shrubbery creation", makeShrubbery},
        {"robotomy request", makeRoboto},
        {"presidential pardon", makePresidential}
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == type[i].type)
            return (type[i].make(formName, target));
    }
    std::cout << "I don't get point. What is this request for?" << std::endl;
    return (NULL);
}