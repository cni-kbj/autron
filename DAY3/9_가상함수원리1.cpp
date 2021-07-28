#include <iostream>

//가상함수 원리   164page ~

class Animal
{
	int age;
public: 
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:	
	virtual void Cry() {}
};

int main()
{
	Animal a; std::cout << sizeof(a) << std::endl; // 4나올것 같지만 8(또는 12)입니다.
	Dog    d; std::cout << sizeof(d) << std::endl; // 8나올것 같지만 12(16)입니다.
												// 가상함수가 있으면 객체크기 좀더 커집니다.
												// => 늘어난 크기가 가상함수의 원리입니다.
	Animal* p = &d;
	p->Cry();  
}


