#include "Human.hpp"

void Human::meleeAttack(std::string const& target)
{
    std::cout << target << " is attacked by melee weapon!" << std::endl;
}

void Human::rangedAttack(std::string const& target)
{
    std::cout << target << " is attacked by ranged weapon!" << std::endl;
}

void Human::intimidatingShout(std::string const& target)
{
    std::cout << target << " is intimidated!" << std::endl;
}


void Human::action(std::string const& action_name, std::string const& target)
{
    typedef void(Human::*actions)(std::string const &);

    actions _actions[] =
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };
    std::string _action_name[] =
    {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };

    for (int i = 0; i < 3; i++)
    {
        if (_action_name[i] == action_name)
            (this->*_actions[i])(target);
    }
}
