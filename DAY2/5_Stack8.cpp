#include <iostream>

// 버전 8. "Stack 클래스" 를 만들지 말고, "Stack 클래스를 생성하는 틀(template)"
//			을 만들자.

// 주의!!  ==> 템플릿으로 설계할때는 "선언" 과 "구현" 분리하지 말고..
//			   클래스 선언안에 모두 구현을 넣어야 합니다.

// 템플릿 종류
// 1. 함수 템플릿 
// 2. 클래스 템플릿

#include "StackT.h"

int main()
{
	// 함수 템플릿은 "타입 인자" 생략 가능했지만, 어제(square<int>(3) 대신 square(3))
	// 클래스 템플릿은 꼭 "타입 인자 전달"해야 합니다.
	Stack<int> s1(100);

	s1.push(10);
	std::cout << s1.pop() << std::endl;
}
