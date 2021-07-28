// 상속과 생성자.   135page ~
#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	Derived()      { std::cout << "Derived()" << std::endl; }
	
	// 아래 처럼만 만들면 무조건 Base의 디폴트 생성자가 호출됩니다.
	// ==> 컴파일러가 "Derived(int a) : Base() {}" 로 변경

	//Derived(int a) { std::cout << "Derived(int)" << std::endl; }

	// 기반 클래스의 다른 생성자를 호출하려면 반드시 아래 처럼 직접 호출 해야 합니다.
	Derived(int a) : Base(a) { std::cout << "Derived(int)" << std::endl; }

	~Derived()     { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d1;	
	Derived d2(5);
}




