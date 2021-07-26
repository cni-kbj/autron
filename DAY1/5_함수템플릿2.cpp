#include <iostream>


// 구현이 유사한 함수가 타입별로 필요 하면 
// 함수를 만들지 말고 "틀"을 만들자
template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int>(1, 2)        << std::endl;
	std::cout << Add<double>(1.1, 2.2) << std::endl;

	// 타입 인자 생략가능합니다.
	std::cout << Add(1, 2) << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;

	// 그런데... 아래처럼 하면 어떻게 될까요 ?
	std::cout << Add<double>(1, 2.2) << std::endl; // 문제 없습니다. T는 무조건 double
	std::cout << Add(1, 2.2) << std::endl; /// ?????? error
}

