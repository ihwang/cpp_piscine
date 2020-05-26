#include "Cat.hpp"

int main(int ac, char **av)
{
    Cat42 cat_file(ac, av);

    cat_file.execute();
    return (cat_file.success_or_fail);
}