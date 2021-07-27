#include <iostream>

// 버전 3. 상태를 나타내는 데이타와 상태를 조작하는 함수를 묶어서 타입을 만들자
//		C++ 구조체는 함수를 넣을수 있다. ( C 구조체는 함수를 넣을수 없다.)

struct Stack
{
	// 멤버 데이타
	int buff[10];
	int idx;

	// 멤버 함수 : 멤버 함수 안에서 멤버 데이타 바로 접근 가능
	void push(int n)  {	buff[idx++] = n; }
	int pop()   	  { return buff[--idx];	}
};
int main()
{
	Stack s1;
	s1.idx = 0;

//	push(&s1, 10);
	s1.push(10);

//	std::cout << pop(&s1) << std::endl; 
	std::cout << s1.pop() << std::endl;

}
