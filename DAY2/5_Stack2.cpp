#include <iostream>

// 버전 2. 스택이 필요하면 "Stack" 타입을 먼저 설계 하자.
//		    C 구조체 사용

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
