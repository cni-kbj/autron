// 1_레퍼런스.cpp    41 page

#include <iostream>

int main()
{
	int n1 = 10;
	int n2 = n1;

	int* p1 = &n1;

	// 레퍼런스 
	// 기존 메모리(변수)의 별명(또다른 이름)을 만드는 문법
	int& r1 = n1;

	r1 = 30;

	std::cout << n1  << std::endl; // ?	
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl;

	// 
	int* p2; // ok.. 초기화 되지 않은 포인터 변수.
	int& r2; // 될까요 ? error.
			 // 초기화 되지 않은 참조 변수는 만들수 없다.
}
// 주소 연산자와 레퍼런스 변수 선언을 헷갈리지 마세요
// int* p = &n1; // 이경우 "&변수이름" => 주소 연산자 입니다.
// int& r = n1;  // 이경우 선언문에 "타입&" 이므로 레퍼런스 변수 선언 입니다.



