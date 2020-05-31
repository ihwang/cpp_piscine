#include "Fragtrap.hpp"

int main(void)
{
	Fragtrap robot1("ihwang");
	Fragtrap robot2("subin");

	robot1.meleeAttack(robot2.get_name());
	robot2.takeDamage(robot1.get_melee_dmg());

	robot2.rangedAttack(robot2.get_name());
	robot1.takeDamage(robot2.get_ranged_dmg());

	robot1.vaulthunter_dot_exe(robot2.get_name());
	robot2.takeDamage(robot1.get_vaulthunder_dmg());
	return (0);
}
