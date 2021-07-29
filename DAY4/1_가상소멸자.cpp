


// github.com/codenuri/autron   에서 

// "DAY4_사전소스" 받으시면 됩니다.





#include <iostream>

// 핵심.
// "상속" 계층에서 사용되는 기반 클래스의 소멸자는 반드시 "가상함수"로 만들어야 한다

// 상속을 사용하지 않은 클래스는 "소멸자를 가상으로 할필요 없다."
// => 2일차 만든 "stack" 등...

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	virtual ~Derived() { std::cout << "~Derived()" << std::endl; }
};
int main()
{
	// 아래 코드는 아무 문제 없습니다.
//	Derived* p = new Derived;
//	delete p; 

	Base* p = new Derived; // Derived 생성자 호출
	delete p;	// 소멸자 호출해야 하는데
				// 컴파일러는 p가 Base* 라는 것 밖에 알수 없습니다.
				// Base 클래스를 조사해서 "소멸자가 가상인지 아닌지 조사"
				// 1) 가상함수가 아니면 static binding 으로 소멸자 호출, 
				//   ==> Base 소멸자만 호출.
				// 2) 소멸자가 가상함수면, 실제 객체가 무엇인지에 따라 호출 결정.
}