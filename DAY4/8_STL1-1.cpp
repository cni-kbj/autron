#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. 반복자의 의미!
	// 컨테이너의 내부 구조에 상관없이 동일한 방식으로 열거 가능
//	auto p = s.begin();
	auto p = v.begin();

	++p;
	int n = *p;

	// 2. begin, end
	auto p1 = s.begin(); // 처음 요소를 가리키는 반복자(포인터처럼 생각하세요)
	auto p2 = s.end();   // 주의 !! 마지막이 아닌 마지막 다음.

	*p2 = 10; // bug.. runtime error. end()로 얻은 반복자는 *p2 하지 마세요

	// 설계의도는 end()가 마지막 다음을 가리키게 하는것이 아래 같은 코드 작성시 
	// 편리합니다.
	while (p1 != s.end())
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

	// 3. 반복자의 정확한 타입은 복잡합니다. 
	//    알아 두긴 하는데, 실전에서는 auto 사용하세요
	std::list<int>::iterator   p3 = s.begin();
	std::vector<int>::iterator p4 = v.begin();

	auto p5 = s.begin(); // 위 p3와 동일
}





