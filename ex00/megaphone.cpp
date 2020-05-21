#include <iostream>
#include <string>

int     main(int ac, char **av)
{
    if (ac != 1)
    {
        ++av;
        for (int i = 0; av[i]; i++)
        {
            std::string s(av[i]);
            std::string::iterator iter = s.begin();
            for (; iter != s.end(); ++iter)
                std::cout << static_cast<char>(toupper(*iter));
        }
        std::cout <<std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
