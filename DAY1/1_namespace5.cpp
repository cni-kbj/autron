// 10 page 내용입니다.

//#include <stdio.h> // C 헤더    모든 C 표준 함수가 전역에만 있습니다.
#include <cstdio>    // C++헤더.  전역 + "std::" 안에도 있습니다.

// C 헤더              C++헤더
// <xxx.h>     ===>    <cxxx>
// <stdlib.h>  ===>    <cstdlib>

int main()
{
	printf("hello\n"); // ok

	std::printf("hello\n"); // ??
}
// github.com/tensorflow   => AI 엔진인 "텐서플로우" 소스
// tensorflow/core/framework

// C++확장자 : cpp  cxx  cc 등 여러개 인데.. 보통 "cpp"
// 업무상 사용하시는 소스에서 사용하는 namespace 한번 조사해 보세요.


