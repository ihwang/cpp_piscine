#include "FragTrap.hpp"

Fragtrap::Fragtrap(std::string name)
	: Claptrap(name), _name(name), _hp(100), _max_hp(100), _energy(100), _max_energy(100),
	_level(1), _melee_dmg(30), _ranged_dmg(30), _vaulthunder_dmg(0), _armor(5)
{
	std::cout << "Flagtrap constructor is called" << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap& obj) : Claptrap(obj._name)
{
	std::cout << "Flagtrap copy construcor is called" << std::endl;
	*this = obj;
}

Fragtrap::~Fragtrap(void)
{
	std::cout << "Flagtrap destructor is called" << std::endl;
	(void)_hp;
	(void)_max_hp;
	(void)_energy;
	(void)_max_energy;
	(void)_level;
	(void)_melee_dmg;
	(void)_ranged_dmg;
	(void)_armor;
}

void Fragtrap::fooAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with foo, causing " << _vaulthunder_dmg << " points of damage !"
			  << std::endl;
}

void Fragtrap::bombAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with bomb, causing " << _vaulthunder_dmg << " points of damage !"
			  << std::endl;
}

void Fragtrap::electronicAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " with electricity causing " << _vaulthunder_dmg
			  << " points of damage !" << std::endl;
}

unsigned int Fragtrap::get_vaulthunder_dmg(void) const
{
	return (_vaulthunder_dmg);
}

void Fragtrap::vaulthunter_dot_exe(std::string const& target)
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
