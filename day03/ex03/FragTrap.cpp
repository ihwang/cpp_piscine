#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FlagTrap constructor is called" << std::endl;
	_vaulthunder_dmg = 0;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FlagTrap copy construcor is called" << std::endl;
	_vaulthunder_dmg = obj._vaulthunder_dmg;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FlagTrap destructor is called" << std::endl;
	(void)_hp;
	(void)_max_hp;
	(void)_energy;
	(void)_max_energy;
	(void)_level;
	(void)_melee_dmg;
	(void)_ranged_dmg;
	(void)_armor;
}

void FragTrap::fooAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with foo, causing " << _vaulthunder_dmg << " points of damage !"
			  << std::endl;
}

void FragTrap::bombAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with bomb, causing " << _vaulthunder_dmg << " points of damage !"
			  << std::endl;
}

void FragTrap::electronicAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with electricity causing " << _vaulthunder_dmg
			  << " points of damage !" << std::endl;
}

unsigned int FragTrap::get_vaulthunder_dmg(void) const
{
	return (_vaulthunder_dmg);
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{

	if (_hp < 26)
		std::cout << "Not enough hp" << std::endl;
	else
	{
		rangedAttack(target);
		meleeAttack(target);
		fooAttack(target);
		bombAttack(target);
		electronicAttack(target);
	}	
}
