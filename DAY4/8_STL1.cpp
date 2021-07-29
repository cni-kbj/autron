#include <iostream>
#include <list>
#include <vector>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열의 시작 주소만 알면, ++연산으로 "모든요소 접근" 가능합니다.
	int* p1 = x;
	std::cout << *p1 << std::endl;
	++p1;
	std::cout << *p1 << std::endl;

	//===================================
	// 반복자(iterator) : 컨테이너의 시작 요소를
	//					가리키는 포인터 역활의 객체
	//					"포인터"와 사용법이 동일하다.
	auto p2 = s.begin();

	std::cout << *p2 << std::endl; // 1 

	++p2; // p2.operator++() 이 호출됩니다.
	
	std::cout << *p2 << std::endl; // 2

}