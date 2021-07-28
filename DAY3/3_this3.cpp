#include <iostream>

class Car
{
public:
	// 다음중 에러는 ?
	void foo()		// void foo(Car* this) 입니다.
	{
		std::cout << this << std::endl; // 1
	}
	// 핵심 : static 멤버 함수는 "객체없이" 호출할수 있습니다.
	static void goo() // void goo() 입니다. this 추가 안됨.
	{
		// 객체 없이 호출될수 있으므로 객체 주소인 "this"를 사용할수 없습니다
		std::cout << this << std::endl; // error. 
	}
};
int main()
{
	Car::goo(); // 객체 없이 호출..

	// static 멤버 함수가 아닌 foo 는 호출하려면 항상 객체가 있어야 합니다.
	Car c;
	c.foo(); // foo(&c) 이므로 foo 에서는 항상 this가 있습니다.
}
// 핵심 : static 멤버함수에서는 "this"를 사용할수 없습니다.
