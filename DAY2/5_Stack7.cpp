#include <iostream>

// 버전 7. 선언과 구현의 분리 => "파일 구조를 잘알아 두세요"

// 클래스를 만드는 코딩 스타일
// 1. 선언(.h) 와 구현(.cpp) 파일로 나누어 작업 : 일반 적인 방식
// 2. 선언 안에 멤버 구현까지 포함 : 간단한 클래스들 만들때 주로 사용
//								=> C#, java 는 이 방법만 가능
//								=> C++도 미래에 include 대신 import 하게되면(C++20,23)
//									이렇게 코딩하는 경우가 많아집니다.

#include "Stack.h"

int main()
{
	Stack s1(100);

	s1.push(10);
	std::cout << s1.pop() << std::endl;
}

