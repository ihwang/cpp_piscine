#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    std::cout << easyfind(vec, 2) << std::endl;
    return (0);
}