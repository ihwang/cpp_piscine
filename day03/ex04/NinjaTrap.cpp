#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NinjaTrap constructor is called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& obj) : ClapTrap(obj)
{
	std::cout << "NinjaTrap copy construcor is called" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {std::cout << "NinjaTrap destructor is called" << std::endl;}

void NinjaTrap::ninjaShoeBox(const ClapTrap& obj)
{
	std::cout <<"Ninjatrap " << get_name() << " threw a shoe box\n"
			  << " <ClapTrap " << obj.get_name()
			  << " is stunned by the smell of box>"
			  << std::endl;
}

void NinjaTrap::ninjaShoeBox(const FragTrap& obj)
{
	std::cout <<"Ninjatrap " << get_name() << " threw a shoe box\n"
			  << " <FragTrap " << obj.get_name()
			  << " chose its favorit shoes and weared it>"
			  << std::endl;
}

void NinjaTrap::ninjaShoeBox(const ScavTrap& obj)
{ 
	std::cout <<"Ninjatrap " << get_name() << " threw a shoe box\n"
			  << " <ScavTrap " << obj.get_name()
			  << " threw the box to " << get_name() << ">" << std::endl;
}

void NinjaTrap::ninjaShoeBox(const NinjaTrap& obj)
{
	std::cout <<"Ninjatrap " << get_name() << " threw a shoe box\n"
			  << " <NinjaTrap " << obj.get_name()
			  << " brought back the box>" << std::endl;
}