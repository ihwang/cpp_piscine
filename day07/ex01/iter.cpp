#include <iostream>

template<typename T>
void iter(T* array, int length, T (*func)(T))
{
	for (int i = 0; i < length; ++i)
	{
		array[i] = func(array[i]);
	}
}

template<typename T>
T add_one(T val)
{
	return (++val);
}

int main(void)
{
	int array[] = {1, 2, 3};

	iter(array, 3, add_one);
	for (int i = 0; i < 3; ++i)
	{
		std::cout << array[i] << std::endl;
	}
	return (0);
}
