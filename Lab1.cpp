#include <iostream>

int main() 
{
	int i; //�������� i ���� ���
	i = 69; //���������������� �� 69
	int number = 72; //���������� ���������� number ���� ���, ���� �������� 72
	i += number; //������������ �������� i �� 69 + 72 (�.�. i + number)
	std::cout << (i) << std::endl;
	int array[3]; //���������� ������ ���������� (������) �� 3 ��������� (������������������ �� 0)
	int* iPointer = &i; //������� ��������� �� i (iPointer)
	int* pn = &number;
	std::cout << (pn) << std::endl; //������� ������ �� ������ �� ��������� � ���������� number
	*iPointer = 15; //������� � i ����� ��������� �������� 15
	std::cout << (i) << std::endl;
	iPointer = &array[0]; //������� ����� � iPointer �� ����� ������� �������� �������
	std::cout << iPointer << std::endl;
	iPointer = iPointer + 2; //������������� �� ������ ������� �������, ��������� pointer arithmetic
	std::cout << array[2] << std::endl;

	//������� � ������ ������� ������� ��������, � � ������ ����� iPointer, �������� 5 � 6
	iPointer = &array[0];
	*iPointer = 5;
	std::cout << array[0] << std::endl;
	iPointer = &array[2];
	*iPointer = 6;
	std::cout << array[2] << std::endl;
	
}
