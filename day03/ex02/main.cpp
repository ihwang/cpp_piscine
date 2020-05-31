#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	Fragtrap robot1("ihwang");
	Fragtrap robot2(robot1);
	ScavTrap robot3("inchan");
	ScavTrap robot4(robot3);


	robot1.meleeAttack(robot2.get_name());
	robot2.takeDamage(robot1.get_melee_dmg());

	robot2.rangedAttack(robot2.get_name());
	robot1.takeDamage(robot2.get_ranged_dmg());

	robot1.vaulthunter_dot_exe(robot2.get_name());
	robot2.takeDamage(robot1.get_vaulthunder_dmg());

	robot3.challengeNewcomer(robot2.get_name());
	return (0);
}
