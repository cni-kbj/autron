#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} // int n = 3
void goo(Point pt) {} // Point pt = {1,2}

int main()
{
	Point p = { 1,2 }; 
	Point p1{ 1,2 };

	int n1 = 3;
	int n2 = { 3 };
	int n3{ 3 };

	foo(3);
	foo( { 3 } ); // C++11 부터 가능한 표기법 - 중괄호 초기화 문법때문에 가능.

	goo(p);	
	goo( { 1,2 } ); // C++11 부터 이 표기법도 지원 됩니다.
}





