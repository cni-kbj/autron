// 5_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// C++, C#, java : this
	// swift, python : self  라고 합니다
	void set(int a, int b) // void set(Point* this, int a, int b)
	{
		x = a;				// this->x = a;
		y = b;				// this->y = b;  // 컴파일시 이렇게 코드가 변경됩니다.
		
		// 멤버 함수 안에서 this는 현재 함수를 호출할때 사용한 객체의 주소 입니다.
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;
	// 멤버 함수의 호출원리
	// => 결국 객체의 주소가 같이 전달되는 것.
	p1.set(10, 20); // set(&p1, 10, 20)
	p2.set(10, 20); // set(&p2, 10, 20);
}
