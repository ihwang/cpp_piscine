#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *ret;

	srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
	case 0:
		ret = new A;
		break;
	case 1:
		ret = new B;
		break;
	case 2:
		ret = new C;
		break;
	}
	return (ret);
}

void identify_from_pointer(Base *p)
{
	void* ptr_void;

	ptr_void = dynamic_cast<A*>(p);
	if (ptr_void)
	{
		std::cout << "Class A has been created" << std::endl;
		return ;
	}

	ptr_void = dynamic_cast<B*>(p);
	if (ptr_void)
	{
		std::cout << "Class B has been created" << std::endl;
		return ;
	}

	ptr_void = dynamic_cast<C*>(p);
	if (ptr_void)
	{
		std::cout << "Class C has been created" << std::endl;
		return ;
	}
}

void identify_from_reference(Base &p)
{
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A has been identified from reference" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B has been identified from reference" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try	
	{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C has been identified from reference" << std::endl;
	}
	catch(const std::bad_cast& e) {}
}

int main(void)
{
	Base* pt_Base = generate();

	identify_from_pointer(pt_Base);
	identify_from_reference(*pt_Base);
	return (0);
}
