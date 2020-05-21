#include "phonebook.hpp"

int main(void)
{
    std::string command;
    Contact_list list;

    while (1)
    {
        std::cout << "Choose a command\n" << "1. ADD\n"
                  << "2. SEARCH\n" << "3. EXIT" << std::endl;
        std::cin >> command;
        if (command == "ADD" || command == "1")
            list.add();
        else if (command == "SEARCH" || command == "2")
            list.search();
        else if (command == "EXIT" || command == "3")
            break ;
        command.clear();
    }
    return (0);
}