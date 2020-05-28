#include "Fixed.hpp"

void exit_fail(void)
{
    std::cout << "Error : Invalid operator" << std::endl;
    exit(EXIT_FAILURE);
}

Fixed execute_oper(Fixed& nb1, Fixed& nb2, char* oper)
{
    if (*oper == '+')
        nb1 = nb1 + nb2;
    else if (*oper == '-')
        nb1 = nb1 - nb2;
    else if (*oper == '*')
        nb1 = nb1 * nb2;
    else if (*oper == '/')
        nb1 = nb1 / nb2;
    else
        exit_fail();
    *oper = '\0';
    return (nb1);
}

bool is_invalid(char buf)
{
    return (buf != '+' && buf != '-' && buf != '*' && buf != '/' && buf != '.' &&
            buf != '(' && buf != ')' && buf != ' ' && !('0' <= buf && buf <= '9')) ;
}

Fixed calculate(std::stringstream& ss, int level)
{
    char buf = '\0';
    float num = 0.0f;
    char oper = '\0';
    Fixed nb1;
    Fixed nb2;

    while (ss.get(buf))
    {
        if (buf != ' ')
            ss.unget();
        else
            continue ;
        if ('0' <= buf && buf <= '9')
        {
            ss >> num; 
            if (nb1.parsed == true)
                nb2 = num;
            else
            {
                Fixed temp(num);
                nb1 = temp;
            }
            if (oper)
                nb1 = execute_oper(nb1, nb2, &oper);
        }
        else
        {
            if (oper)
                exit_fail();
            ss >> oper;
            if (oper == '(')
            {
                nb1 = calculate(ss, level + 1);
                oper = '\0';
            }
            else if (oper == ')')
                return (nb1);
        }
    }
    if (level)
        exit_fail();
    return (nb1);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Usage :eval_expr : <arithmetic expression>"
                  << std::endl;
    else
    {
        std::stringstream ss;
        std::string str = av[1];
        for (int i = 0; i < str.length(); i++)
            if (is_invalid(str[i]))
                exit_fail();
        ss.str(str);
        Fixed ret = calculate(ss, 0);
        std::cout << ret << std::endl;
    }
    return (0);
}