#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>   // accumulate 는 이헤더에 있습니다.

int main()
{
	std::list<int>   v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 모든 요소를 뒤집는 알고리즘는 std::reverse() 입니다.
	// v의 모든 요소를 뒤집어 보세요
	// 핵심 1. 알고리즘은 "멤버가 아닌 일반 함수" 입니다.
	//      2. 인자는 항상 "반복자의 쌍" 입니다
	std::reverse( v.begin(), v.end() );

	for (auto e : v)
		std::cout << e << std::endl;

	//===================
	int n = std::accumulate(v.begin(), v.end(), 0); // int sum = 0 으로 시작하라는 것
	
	std::cout << n << std::endl;

	// 특정 기능을 하는 함수가 필요하면 만들지 말고 "STL"에서 먼저 찾아라!
}

// 핵심 : 1. 알고리즘함수는 "멤버가 아닌 일반함수" 입니다.
//        2. 헤더 파일 <alogorithm> 필요

// cppreference.com 에 와보세요. 첫번째 화면에서 "Algorithm Library" 선택(오른쪽 위 3번째)
