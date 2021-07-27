// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  
#include <list>

int main()
{	
	int x[3] = { 1,2,3 }; // C 에서는 배열을 많이 사용합니다.

	std::vector<int> v = { 1,2,3 }; // vector는 배열처럼 연속된 메모리 입니다.
	
	// 사용법은 동일합니다.
	x[0] = 10;
	v[0] = 10;

	// 그런데, vector가 훨씬 좋습니다.
	x.resize(5); // error. 배열은 크기 변경 안됩니다.
	v.resize(5); // ok.. 5개짜리 크기 vector
}

