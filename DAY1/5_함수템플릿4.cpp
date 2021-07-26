// 5_�Լ����ø�4.cpp
#include <iostream>

// Ÿ�� "T" ������ �پ��� Ư���� �����ϴ� ��� - "type traits" ��� �մϴ�.
#include <type_traits>

template<typename T> void foo(T a)
{
	// T �� Ÿ�Կ� ���� �ٸ� �˰����� �ۼ��ϰ� �ʹ�.
	if (std::is_same<T, int>::value)
		std::cout << "T �� int" << std::endl;

	else if (std::is_same<T, double>::value)
		std::cout << "T �� double" << std::endl;

	if (std::is_integral<T>::value) //���� �迭�ΰ� ???
		std::cout << "���� �迭" << std::endl;

	if (std::is_pointer<T>::value) // ������ �ΰ�
		std::cout << "������" << std::endl;
}

int main()
{
	foo(3);   // T = int
	foo(3.4); // T = double
}