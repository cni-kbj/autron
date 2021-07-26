// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>
// 조정자 함수(manipulator) : std::hex 등과 같은 것들.. 정체는 함수 입니다.
//								원리는 수~목 정도에..
#include <iomanip>  // 이 안에 많은 조정자 함수가 있습니다.
int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10 진수

	std::cout << std::hex << n << std::endl; // 16 진수
	
	std::cout << n << std::endl; // 16진수, 다시 변경할때 까지 계속 적용

	std::cout << std::dec;		// 앞으로는 10진수로
	std::cout <<  n << std::endl; // 

	std::cout << "hello" << std::endl; // 
	std::cout << std::setw(10) << "hello" << std::endl; // 
	std::cout << std::setw(10) << std::setfill('#') << "hello" << std::endl; // 
}
