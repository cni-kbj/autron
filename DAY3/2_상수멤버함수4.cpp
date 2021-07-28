// 파일 분할.. 1번 복사해오세요.

#include <iostream>
// Point.h
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0);
	void set(int a, int b);
	// 핵심. 상수 멤버 함수 만들때 "const" 키워드는 선언과 구현에 모두 표기해야 합니다.
	void print() const; 
};

// Point.cpp
#include "Point.h"

Point::Point(int a, int b) : x(a), y(b) {}

void Point::set(int a, int b) { x = a; y = b; }

void Point::print() const
{
	std::cout << x << ", " << y << std::endl; 
}



int main()
{
	const Point p(1, 2); 
}

