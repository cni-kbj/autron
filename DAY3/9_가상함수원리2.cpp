#include <iostream>

// 클래스에 가상함수가 있으면 컴파일러가 아래 코드를 생성합니다.
void* animal_vtable[] = { Animal 타입정보, &Animal::Cry, &Animal::Run };

class Animal
{
	void* vtptr = animal_vtable; // 컴파일러가 추가한 멤버 입니다.
								 // 이 멤버 때문에 객체의 크기가 커집니다.
	int age;
public:
	virtual void Cry() {}
	virtual void Run() {}
};
// Animal a1, a2;

//====================================================
void* dog_vtable[] = { Dog 타입정보, &Dog::Cry, &Animal::Run };

class Dog : public Animal
{
	vptr = dog_vtable; // 

	int color;
public:
	virtual void Cry() {}
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry(); 
	// 1. Cry 가 가상이 아니면 무조건 Animal Cry
	// 2. 가상함수라면 컴파일시에 아래 코드 생성
	//    "p->vtptr[1]()"
	//		1은 몇번째 가상함수인지를 나타냄.
}

// 가상함수는
// A. 메모리 오버헤드
//   ==> 클래스등 가상함수 테이블의 오버헤드
//   ==> 객체당 하나의 vtptr 포인터 오버헤드

// B. 실행시간 오버헤드
//   ==> 호출시, 테이블에 보관된 주소를 꺼내서 호출 하므로
//       약간의 지연 발생


