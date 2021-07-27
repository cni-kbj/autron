#include <iostream>
// OOP 핵심 : 프로그램에서 "필요한 타입"을 먼저 설계하자!!

// C 언어의 한계  : 새로운 타입(구조체)를 만들때 데이타만 묶어서 만들수 있다.
//					관련된 함수를 묶을수 없다.
//					구조체 안에 함수를 넣을수 없다.

// "복소수" 라는 타입을 먼저 설계한후 사용하자.
struct Complex
{
	int real;
	int image;
};

Complex Add(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.real  = c1.real + c2.real;
	temp.image = c2.image + c2.image;
	return temp;
}


int main()
{
	Complex c1 = { 1,1 };
	Complex c2 = { 2,2 };
	Complex c3 = Add(c1, c2);
}
