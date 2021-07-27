// 5_Stack9.cpp
#include <iostream>

// 필요한 타입이 있으면, 먼저 "표준에 있는지 찾고, 표준것을 사용하자"
// 대부분의 "자료구조"와 "알고리즘"은 이미 C++ 표준에 있다.
#include <stack>

int main()
{
	// "std::" 안에 있고 "템플릿" 입니다
	std::stack<int> s;  // 요소에 따라 자동증가 하므로 크기를 넘기지 않습니다.

	s.push(10);
	s.push(20);
	s.push(30);

	// 주의!!, 제거/반환은 별도의 함수 입니다.
	std::cout << s.top() << std::endl; // 30 꺼내기만, 제거 안됨  
	std::cout << s.top() << std::endl; // 30

	s.pop(); // 제거만.. 반환타입은 void
	std::cout << s.top() << std::endl; // 20
}


