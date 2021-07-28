#include <iostream>

class Test
{
public:
	// 많이 사용되지 않지만..
	// 동일 이름의 멤버함수를, "상수함수", "비상수함수"로 만들수 있습니다.
	void foo()       { std::cout << "foo" << std::endl; }		// 1
	void foo() const { std::cout << "foo const" << std::endl; }	// 2
};

int main()
{
	Test t;		// 상수 객체 가 아님!!
	t.foo();	// 1) 비상수 멤버 함수 호출
				// 2) (1)이 없으면 (2)번 사용

	const Test ct;
	ct.foo();	// 상수 객체 이므로
				// => 상수 멤버 함수(2) 만 호출가능.
}

