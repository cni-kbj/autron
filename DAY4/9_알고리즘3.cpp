#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 핵심 : 알고리즘(멤버가 아닌 일반함수)과 동일한 이름의 멤버 함수가 있다면
//        알고리즘 보다 "멤버함수를 사용해라"
// ==> list 에서 remove 할때는 "멤버 함수 remove" 가 좋다.

int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   v = { 1,2,3,1,2,3,1,2,3,1 };

	// v가 list 라도 아래 코드는 잘 수행됩니다.. 그런데!!!! 문제가 뭘까요 ?
//	auto p = std::remove(v.begin(), v.end(), 3);

//	v.erase(p, v.end());


	// list 는 자료 구조 특성상.. 
	// 요소를 찾을때마다 메모리를 제거하는 것이 효율적입니다.
	// 그래서, "멤버 함수" remove 가 별도로 제공됩니다.
	v.remove(3); // 3을 찾을때마다 메모리 제거



	for (auto n : v)
		std::cout << n << std::endl;

	return 0;
}


