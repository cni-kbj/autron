#include <iostream>

// 버전 4. 잘못 사용하기 어렵게.. 제대로 사용하기 쉽게.
//		   접근 지정자, 정보은닉,

// 상태를 나타내는 데이타를 private 에 놓아서
// 외부의 잘못된 사용으로 객체의 상태가 "불안정"해지는 것을 막는다.

// 오직 멤버 함수로만 객체의 상태는 변할수 있다.

// =>"캡슐화(encapsulation)", "정보 은닉" 이라고도 합니다.

// private, public : "접근 지정자" 라고 합니다.

// struct : 접근 지정자 생략시 디폴트가 "public"
// class  : 접근 지정자 생략시 디폴트가 "private"

//struct Stack
class Stack
{
//private:	// private 멤버 : 멤버 함수만 접근 가능하고, 외부에서 접근시 에러!
	int buff[10];
	int idx;

public:		// public 멤버 : 멤버가 아닌 함수에서도 접근 가능.
	void init()      { idx = 0; }
	void push(int n) { buff[idx++] = n; }
	int pop()        { return buff[--idx]; }
};

int main()
{
	Stack s1;
//	s1.idx = 0; // error. private 멤버
	s1.init();  // 이제 idx 를 직접 초기화 할수 없고, 멤버 함수에 의존해야 한다.

	s1.push(10); // ok. public 멤버  

//	s1.idx = -10; // 사용자가 실수 했다.
				  // 더이상 스택을 사용할수 없다.
				  // private 이라면 "컴파일 에러"

	std::cout << s1.pop() << std::endl;
}
