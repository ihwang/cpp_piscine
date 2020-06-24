#include <iostream>
#include <string>

template <typename T>
void swap(T& t1, T& t2)
{
	T tmp = t1;

	t1 = t2;
	t2 = tmp;
}

template <typename T>
T const & min(T const & t1, T const & t2)
{
	return (t1 >= t2 ? t2 : t1);
}

template <typename T>
T const & max(T const & t1, T const & t2)
{
	return (t1 > t2 ? t1 : t2);
}

int main(void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return (0);
}
