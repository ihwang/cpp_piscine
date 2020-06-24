#include "Array.hpp"
#include "Array.class.tpp"

int main(void)
{
    Array<int> a(10);
    Array<char> b(10);

    char j = 'a';
    for (int i = 0; i < 10; ++i, ++j)
    {
        a[i] = i;
        b[i] = j;
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << " ";
        std::cout << b[i] << std::endl;
    }

    std::cout << a[11] << std::endl;
    return (0);
}