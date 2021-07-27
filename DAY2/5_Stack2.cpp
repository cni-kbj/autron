#include <iostream>

// 버전 2. 스택이 필요하면 "Stack" 타입을 먼저 설계 하자.
//		    C 구조체 사용

// C 언어의 구조체는 "함수를 포함 할수 없습니다."
// 그래서, Stack 데이타와 Stack 을 조작하는 함수가 분리되어 있습니다.
// Stack 관련 모든 함수에서 데이타를 받아야 하므로  1번째 인자가 Stack* 이 되어야 합니다.

// 데이타와 함수를 묶을수 없을까요 ?? => C++ 구조체!!!

// 필요한 데이타를 묶어서 "Stack" 타입 설계
struct Stack
{
	int buff[10];
	int idx;
};
void push(Stack* s, int n)
{
	s->buff[(s->idx)++] = n;
}
int pop(Stack* s)
{
	return s->buff[--(s->idx)];
}
int main()
{
	Stack s1;
	Stack s2;
	s1.idx = 0;
	s2.idx = 0;

	push(&s1, 10);
	push(&s1, 20);
	std::cout << pop(&s1) << std::endl; // 20

}
