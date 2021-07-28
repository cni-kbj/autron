// 7_가상함수1  144 page ~

#include <iostream>

class Animal
{
public:
	// 아래 함수는 static binding 입니다.
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 

	// 아래 함수는 dynamic binding 해달라는 의미 입니다.
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};


class Dog : public Animal
{
public:
	// 함수 오버라이드(override)
	// 기반 클래스의 함수를 파생클래스가 다시 만드는 것..
	// 주의. 오버로딩(overloading) 은 인자가 다른 경우.. 
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }
	void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; a.Cry1(); // 1 번 호출
	Dog    d; d.Cry1(); // 2 번 호출

	Animal* p = &d;	// 포인터 타입은 Animal, 객체는 Dog 일때 ?	

	// if ( 사용자입력값 == 1 ) p = &a;

	// 컴파일러가 컴파일 할때 p 가 가리키는 객체가 무엇인지는 알수 없습니다.
	// 단지, 컴파일러는 p의 타입이 "Animal*" 라고만 알고 있습니다.

	p->Cry1(); // 가상함수가 아니므로 "static binding" Animal::Cry1()
	p->Cry2(); // 가상함수 이므로 "dynamic binding"    Dog::Cry2()
}



// p-Cry1() 을 "Animal::Cry", "Dog::Cry" 중 어느 함수와 연결할것인가 ??

// "함수 바인딩(binding) 문제"

// 1. static binding : 컴파일 시간에 컴파일러가 결정하는 것.
//						원리 : p의 타입만으로 호출 결정(실제객체는 알수 없음), Animal* 타입이므로
//						Animal::Cry 호출..
// 비논리적, 빠르다.
// C++, C#


// 2. dynamic binding : 컴파일시 p가 가리키는 메모리를 조사하는 코드 생성.
//                      실행시간에 어떤 객체인지 조사후 함수 결정
//						p가 Dog객체를 가리키면 Dog::Cry  호출
// 논리적인 동작, 느리다.
// java, swift, python, rust 등 대부분의 객체지향 언어..
// C++과 C#의 "virtual 함수(가상함수)"





