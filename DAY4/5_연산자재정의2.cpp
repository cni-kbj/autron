//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// 멤버 함수로 구현한 + 함수
	// ==> 이항 연산자를 멤버 함수로 만들면, 인자가 한개가 됩니다. 
	// ==> p1 + p2 => p1.operator+(p2)이므로
	Point operator+(const Point& pt)
	{
		std::cout << "+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 1. 멤버 함수로 구현하는 경우.
	Point p5 = p1 + p2;   // p1.operator+(p2)

	p5.print(); // 3, 3
}

