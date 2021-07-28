// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버함수(const member function ) : 멤버 함수 뒤에 const를 붙이는 문법
	// => 멤버함수 안에서 모든 멤버를 상수 취급 한다.
	void print() const  
	{	
//		x = 100; // error. 이 함수 안에서는 모든 멤버가 상수 취급 된다.

		std::cout << x << ", " << y << std::endl; // ok.. read 이므로!
	}
};
int main() 
{
	const Point p(1, 2); // 상수 객체입니다.!! 

	// 아래 3줄을 잘생각해 보세요
	p.x = 10;		// error. public 에 있지만,, 상수객체이므로!
	p.set(10, 20);	// error
	p.print();		// 호출되게 하려면 "반드시 print 함수는 상수 멤버함수" 이어야 합니다.
					
	// "상수객체는 상수 멤버 함수 만 호출할 수 있습니다"

	// 멤버함수 뒤에 const 를 붙이는 이유는 
	// "상수 객체"일때 호출할수 있게 하려는 것 입니다.
}

