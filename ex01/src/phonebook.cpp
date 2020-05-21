#include "phonebook.hpp"

void Contact_list::add(void)
{
    t_contact *temp = new t_contact;

    std::cout << "First name?\n> ";
    std::cin >> temp->first;
    std::cout << "Last name?\n> ";
    std::cin >> temp->last;
    std::cout << "Nick name?\n> ";
    std::cin >> temp->nickname;
    std::cout << "Login?\n> ";
    std::cin >> temp->login;
    std::cout << "Postal address?\n> ";
    std::cin >> temp->postal;
    std::cout << "Email address?\n> ";
    std::cin >> temp->email;
    std::cout << "Phone number?\n> ";
    std::cin >> temp->phone_number;
    std::cout << "Date of birth?\n> ";
    std::cin >> temp->birth;
    std::cout << "Favorit meal?\n> ";
    std::cin >> temp->favorit_meal;
    std::cout << "Underwear color?\n> ";
    std::cin >> temp->underwear_color;
    std::cout << "Darkest secret?\n> ";
    std::cin >> temp->darkest_secret;
    temp->next = NULL;

    if (contact == NULL)
    {
        contact = temp;
        contact->index = 0;
    }
    else
    {
        t_contact *p = contact;
        while (p->next)
            p = p->next;
        temp->index = p->index + 1;
        p->next = temp;
    }
}

void Contact_list::search(void) const
{
    t_contact *p = contact;
    int user_index;

    while (p)
    {
        std::cout << std::setw(10) << p->index;
        std::cout << "|";
        if ((int)p->first.length() > 10)
            std::cout << p->first.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << p->first;
        std::cout << "|";
        if ((int)p->last.length() > 10)
            std::cout << p->last.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << p->last;
        std::cout << "|";
        if ((int)p->nickname.length() > 10)
            std::cout << p->nickname.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << p->nickname;
        std::cout << std::endl;
        p = p->next;
    }
    std::cout << "Choose a index\n> ";
    std::cin >> user_index;
    p = contact;
    while (p)
    {
        if (user_index == p->index)
        {
            std::cout << p->index << std::endl;
            std::cout << p->first << std::endl
                      << p->last << std::endl
                      << p->nickname << std::endl
                      << p->login << std::endl
                      << p->postal << std::endl
                      << p->email << std::endl
                      << p->phone_number << std::endl
                      << p->birth << std::endl
                      << p->favorit_meal << std::endl
                      << p->underwear_color << std::endl
                      << p->darkest_secret << std::endl;
            return ;
        }
        p = p->next;
    }
    std::cout << "No such index" << std::endl;
}