// 상속과 생성자.   135page ~
#include <iostream>

// 1. 객체 생성시, 기반 클래스의 생성자도 호출됩니다.
// 2. 순서 및 원리가 중요
//    ==> 컴파일러가 Derived 의 생성자에서 Base의 디폴트 생성자를호출하는 코드를 생성하는것
class Base
{
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	Derived()       { std::cout << "Derived()" << std::endl; } 
	Derived(int a)  { std::cout << "Derived(int)" << std::endl; }
	~Derived()      { std::cout << "~Derived()" << std::endl; }
};

/*
// 사용자가 위처럼 코드를 만들면 컴파일러가 아래 처럼 변경합니다. => 생성자를 주의 깊게 보세요..
class Derived : public Base
{
public:
	// 아래처럼 기반 클래스의 디폴트 생성자를 호출하는 코드가 컴파일러에 의해 추가 됩니다.
	Derived()      : Base()    { std::cout << "Derived()" << std::endl; }
	Derived(int a) : Base()    { std::cout << "Derived(int)" << std::endl; }
	~Derived()                 { std::cout << "~Derived()" << std::endl; ~Base();  }
};
*/
int main()
{
//	Derived d1;	
	Derived d2(5);
}




