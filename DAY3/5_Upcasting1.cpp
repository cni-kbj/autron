// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog; // ok, 같은 타입이므로 당연하다!!
//	int*    p2 = &dog; // error. 
	Animal* p3 = &dog; // ok. 기반 클래스 포인터로 파생클래스를
						// 가리킬수 있다 => "upcasting 이라고 합니다."
						// 객체지향 디자인의 "핵심중의 핵심"
						// 왜 가능한지는 "메모리 그림"을 생각하세요!!






	// 1. 기반 클래스 포인터로 파생 클래스객체의 주소를 가리킬수 있다.

	// 2. 하지만 파생클래스 고유 멤버 접근은 안된다.
	// 컴파일러는 "p3" 의 타입이 "Animal*"로 알고 있습니다.
	p3->age = 10;   // ok.. Animal 의 멤버
	p3->color = 20; // error. Animal 의 멤버가 아닌 Dog가 추가한 멤버

	// 3. Dog 고유 멤버에 접근하려면 캐스팅 필요..
	static_cast<Dog*>(p3)->color = 20; // ok.

}




