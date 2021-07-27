#include <iostream>

// 참고. 구조체 안에 함수가 있는 원리는 뭔가요 ??
//       정확한 동작 원리!!

struct Stack
{
	int buff[10];
	int idx;
	// 아래 2개의 멤버 함수는 결국 컴파일 되면 인자가 추가됩니다.
	//void push(int n) { buff[idx++] = n; }
	//int pop() { return buff[--idx]; }
};
// 컴파일러가 위 코드를 아래 처럼 변경
void push(Stack* s, int n) { s->buff[(s->idx)++] = n; }
int pop(Stack* s)          { return s->buff[--(s->idx)]; } //  s 를 보통 "this"라고 합니다.

int main()
{
	Stack s1; // 멤버 데이타만 "스택 메모리"에 놓입니다.
	s1.idx = 0;

	s1.push(10); // 이 코드는 컴파일러가
				 // push(&s1, 10) 으로 변경합니다.

	std::cout << s1.pop() << std::endl;

}
