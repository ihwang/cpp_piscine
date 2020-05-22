#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pt = &str;
    std::string &ref = str;

    std::cout << "By pointer : " << *pt << std::endl;
    std::cout << "By reference : " << ref << std::endl;
    return (0);
}