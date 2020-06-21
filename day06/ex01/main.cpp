#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string s1;
	std::string s2;
	int n;
};

void* serialize(void)
{
	Data* ret = new Data;
	char table[] = "abcdefghijklmnopqrstuvwxyz"
				   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				   "0123456789";
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
	{
		ret->s1 += table[rand() % sizeof(table)];
		ret->s2 += table[rand() % sizeof(table)];
	}
	ret->n = rand();
	return (reinterpret_cast<void*>(ret));
}

Data* deserialize(void* raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	void* pt_void;
	Data* pt_Data;

	pt_void = serialize();
	pt_Data = deserialize(pt_void);

	std::cout << "s1 : " << pt_Data->s1 << std::endl
			  << "s2 : " << pt_Data->s2 << std::endl
			  << "n : " << pt_Data->n << std::endl;
	return (0);
}
