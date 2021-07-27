#include <iostream>

// 버전 5. 객체(변수) 초기화를 자동으로 => "생성자" 도입

// 객체(object) : 세상에 존재하는 모든 사물들!!! 이라는 의미 인데..

// 보통은 
// int   n; // 메모리만 할당				====> "변수"
// Stack s; // 메모리할당  + 생성자 호출   ====> "객체" 라고 합니다


class Stack
{
	int buff[10];
	int idx;
public:
	// 생성자 : "클래스 이름" 과 동일한 이름의 함수
	//		    반환 타입이 없고, 
	//		    객체 생성시 자동으로 호출된다.
	Stack() { idx = 0; }

//	void init() { idx = 0; }
	void push(int n) { buff[idx++] = n; }
	int pop() { return buff[--idx]; }
};
int main()
{
	Stack s1;
//	s1.init();
	s1.push(10); 
	std::cout << s1.pop() << std::endl;
}
