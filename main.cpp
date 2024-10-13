#include <iostream>

int main() 
{
	int i;
	i = 69;
	int number = 72;
	i += number;
	std::cout << (i) << std::endl;
	int array[3];
	int* iPointer = &i;
	int* pn = &number;
	std::cout << (iPointer) << std::endl;
	*iPointer = 15;
	std::cout << (i) << std::endl;
	iPointer = &array[0];
	std::cout << iPointer;
}
