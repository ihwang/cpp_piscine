#include "FragTrap.hpp"

Fragtrap::Fragtrap(std::string name)
	: _name(name), _hp(100), _max_hp(100), _energy(100), _max_energy(100),
	_level(1), _melee_dmg(30), _ranged_dmg(30), _vaulthunder_dmg(0), _armor(5)
{
	std::cout << "Constructor is called" << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap& obj)
{
	std::cout << "Copy construcor is called" << std::endl;
	*this = obj;
}

Fragtrap::~Fragtrap(void) {std::cout << "Destructor is called" << std::endl;}

Fragtrap& Fragtrap:: operator=(const Fragtrap& obj)
{
	std::cout << "assignment operator is called" << std::endl;
	_name = obj._name;
	_hp = obj._hp;
	_max_hp = obj._max_hp;
	_energy = obj._energy;
	_max_energy = obj._max_energy;
	_level = obj._level;
	_melee_dmg = obj._melee_dmg;
	_ranged_dmg = obj._ranged_dmg;
	_vaulthunder_dmg = obj._vaulthunder_dmg;
	_armor = obj._armor;
	return (*this);
}

std::string Fragtrap::get_name(void) const
{
	return (_name);
}

unsigned int Fragtrap::get_melee_dmg(void) const
{
	return (_melee_dmg);
}

unsigned int Fragtrap::get_ranged_dmg(void) const
{
	return (_ranged_dmg);
}

unsigned int Fragtrap::get_vaulthunder_dmg(void) const
{
	return (_vaulthunder_dmg);
}

void Fragtrap::rangedAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at range, causing " << _ranged_dmg << " points of damage !"
			  << std::endl;
}

void Fragtrap::meleeAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at melee, causing " << _melee_dmg << " points of damage !"
			  << std::endl;
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

void Fragtrap::takeDamage(unsigned int amount)
{
	_hp -= (amount - _armor);
	if (_hp < 0)
		_hp = 0;
}

void Fragtrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
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
