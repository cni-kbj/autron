#include <iostream>

// 선언과 구현의 분리
class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0);
};

// 멤버 함수의 외부 구현은 "반환타입 클래스이름::함수이름()" 입니다.
// => 초기화 리스트는 구현에 적어야 합니다.
// => 함수 인자의 디폴트 값은 함수 선언에만 있어야 합니다.
Point::Point(int a, int b) 
	: x(a), 
	  y(b)
{

}


int main()
{

}




