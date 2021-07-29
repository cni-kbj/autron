#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool foo(int n) { return n % 3 == 0;  }

int main()
{
	std::vector<int> v = { 1,6,3,4,5,7,3,8,9,10 };
		
	
	// "값"을 검색
	auto p = std::find(std::begin(v), std::end(v), 3); 


	// find 는 정말 generic 할까 ?
	// 주어진 구간에서 처음 나오는 3의 배수를 찾고 싶다.

	// find_if 는 마지막 인자로 "함수"를 받습니다.
	// find_if 의 3번째 인자는 "bool을 반환하는 단항함수" 로 전달해야 합니다.
	auto p2 = std::find_if(std::begin(v), std::end(v), foo );



	std::cout << *p2 << std::endl; // 6


	return 0;
}





