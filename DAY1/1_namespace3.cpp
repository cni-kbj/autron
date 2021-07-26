// 1_namespace3.cpp - 9page 내용
// 모든 C++ 표준 함수는 "std::" 안에 있습니다.
#include <algorithm>
using namespace std; // 나쁜 코드입니다. 되도록 사용하지 마세요.

int count = 0;

int main()
{
	printf("%d\n", count); // 왜 에러 일까요 ?

//	int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
					   // error.. 모든 표준함수는 "std::" 안에 있습니다.

	int n = std::min(3, 2); // ok..
}
