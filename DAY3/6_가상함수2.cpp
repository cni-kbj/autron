// 7_가상함수1  144 page ~

#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};
class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d;

	Animal* p = &d;	
	
	// 아래 주석을 꼭 기억하세요
	// 1. 컴파일러는 현재 "p 가 Animal*" 라고만 생각합니다. 가르키는 곳은 알수 없습니다.
	// 2. 멤버 함수 호출시, "virtual" 인지 "아닌지" 조사해야 합니다.
	//    ===> 포인터 타입인 "Animal 클래스"의 선언을 조사합니다.
	//    ===> virtual 키워드는 반드시 기반 클래스에 표기하세요..
	//    ===> 파생 클래스에는 표기해도 되고 안해도 되는데.. 표기하는 것이 가독성측면에서 좋습니다.
	p->Cry1(); 
	p->Cry2(); 
}





