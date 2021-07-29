#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘은 컨테이너를 모른다.
// ==> 그래서, 알고리즘은 "컨테이너의 메모리 제거" 를 할수 없다.
// ==> remove 는 "메모리제거" 가 아닌 "요소를 당기는" 방법으로 구현되어 있다.
// ==> 그리고, remove 후에  v.erase()로 한번에 필요 없는 구간의 메모리 제거합니다.
// ==> "연속된 메모리" 자료구조에서는 이 방법이 최선입니다. ( 성능저하 없습니다.)

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 주어진 구간에서 특정요소 제거.
	auto p = std::remove(v.begin(), v.end(), 3);

	// 3을 제거(다른 요소를 앞으로 당기고)하고 남은 구간 메모리 제거
	// 메모리 제거는 "컨테이너의 멤버 함수"로만 가능
	v.erase(p, v.end());

	for (auto n : v)
		std::cout << n << std::endl;

	return 0;
}


