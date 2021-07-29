#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

// STL 의 3대 요소
// 1. Container : list, vector와 같은 자료구조
// 2. Iterator  : 컨테이너를 열거할때 사용하는 포인터 역활의 객체
// 3. Algorithm : find, sort 와 같은 함수들(멤버함수가 아닌 일반 함수)

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// s 안에서 3을 찾아 봅시다.
	//s.find(3); // 이렇게 설계 했다면, list, vector 에 모두 find가 있어야 한다.
				// java 스타일

	// 단점 : 복잡해 보입니다.
	// 장점 : 하나의 함수로 모든 컨테이너에 선형검색 가능
//	auto p = std::find(s.begin(), s.end(), 3);
	auto p = std::find(v.begin(), v.end(), 3);



	if (p == s.end())
		std::cout << "실패" << std::endl;
	else
		std::cout << "성공 : " << *p << std::endl;

	// 검색 성공시 3이 있는 위치(반복자)반환
	//      실패시 마지막 다음 요소를 가리키는 반복자(end()) 반환
}

