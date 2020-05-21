#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact_list
{
    typedef struct          s_contact
    {
        int                 index;
        std::string         first;
        std::string         last;
        std::string         nickname;
        std::string         login;
        std::string         postal;
        std::string         email;
        std::string         phone_number;
        std::string         birth;
        std::string         favorit_meal;
        std::string         underwear_color;
        std::string         darkest_secret;
        struct s_contact    *next;
    }                       t_contact;

    t_contact *contact;

    public:
        Contact_list (void) { contact = NULL; }
        ~Contact_list (void)
        {
            while (contact)
            {
                t_contact *temp = contact;
                contact = contact->next;
                delete temp;
            }
        }
        void add(void);
        void search(void) const;
};
