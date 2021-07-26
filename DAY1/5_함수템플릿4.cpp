// 5_함수템플릿4.cpp
#include <iostream>

// 타입 "T" 에대한 다양한 특성을 조사하는 기술 - "type traits" 라고 합니다.
#include <type_traits>

template<typename T> void foo(T a)
{
	// T 의 타입에 따라 다른 알고리즘을 작성하고 싶다.
	if (std::is_same<T, int>::value)
		std::cout << "T 는 int" << std::endl;

	else if (std::is_same<T, double>::value)
		std::cout << "T 는 double" << std::endl;

	if (std::is_integral<T>::value) //정수 계열인가 ???
		std::cout << "정수 계열" << std::endl;

	if (std::is_pointer<T>::value) // 포인터 인가
		std::cout << "포인터" << std::endl;
}

int main()
{
	foo(3);   // T = int
	foo(3.4); // T = double
}