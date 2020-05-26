#include "Human.hpp"

int main(void)
{
    std::string target1 = "ihwang";
    std::string target2 = "subin";

    Human jim;

    jim.action("meleeAttack", target1);
    jim.action("rangedAttack", target2);

    return (0);
}