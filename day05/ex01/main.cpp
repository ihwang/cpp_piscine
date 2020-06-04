#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat ihwang("ihwang", 42);
    Form A("Form A", 10, 50);
    Form B("Form B", 10, 40);

    ihwang.signForm(A);
    std::cout << A << std::endl;
    ihwang.signForm(B);

    return (0);
}