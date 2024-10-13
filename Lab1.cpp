#include <iostream>

int main() 
{
	int i; //ќбъ€вить i типа инт
	i = 69; //»нициализировать на 69
	int number = 72; //ќпределить переменную number типа инт, дать значение 72
	i += number; //ѕерезаписать значение i на 69 + 72 (т.е. i + number)
	std::cout << (i) << std::endl;
	int array[3]; //ќпределить группу переменных (массив) из 3 элементов (инициализированных на 0)
	int* iPointer = &i; //—оздать указатель на i (iPointer)
	int* pn = &number;
	std::cout << (pn) << std::endl; //—читать данные по адресу из указател€ в переменную number
	*iPointer = 15; //¬писать в i через указатель значение 15
	std::cout << (i) << std::endl;
	iPointer = &array[0]; //—менить адрес в iPointer на адрес первого элемента массива
	std::cout << iPointer << std::endl;
	iPointer = iPointer + 2; //ѕереместитьс€ на третий элемент массива, использу€ pointer arithmetic
	std::cout << array[2] << std::endl;

	//¬писать в первый элемент массива напр€мую, и в третий через iPointer, значени€ 5 и 6
	iPointer = &array[0];
	*iPointer = 5;
	std::cout << array[0] << std::endl;
	iPointer = &array[2];
	*iPointer = 6;
	std::cout << array[2] << std::endl;
	
}
