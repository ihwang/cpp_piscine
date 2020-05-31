#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap robot1("ihwang");
	ScavTrap robot2("inchan");
	NinjaTrap robot3("ninja");

	robot1.meleeAttack(robot2.get_name());
	robot2.takeDamage(robot1.get_melee_dmg());

	robot1.vaulthunter_dot_exe(robot2.get_name());
	robot2.takeDamage(robot1.get_vaulthunder_dmg());

	robot2.rangedAttack(robot2.get_name());
	robot1.takeDamage(robot2.get_ranged_dmg());

	robot2.challengeNewcomer(robot3.get_name());

	robot3.ninjaShoeBox(robot1);
	robot3.ninjaShoeBox(robot2);
	robot3.ninjaShoeBox(robot3);

	return (0);
}
