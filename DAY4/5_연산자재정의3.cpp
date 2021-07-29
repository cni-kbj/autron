//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }
	Point operator+(const Point& pt)
	{
		std::cout << "+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
	friend Point operator+(const Point& p1, const Point& p2);
};
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "not member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);	// private 멤버 접근하는 문제 발생
											// 1. getx(), gety() 함수 만들어서 사용
											// 2. friend 함수로 등록
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p5 = p1 + p2; // p1.operator+(p2) 이 있으면 사용하고, 없으면
						// operator+(p1, p2)

	p5.print(); 

	// 왜. 멤버로 하면 되지 ? 일반 함수로 합니까 ?
	// 멤버가 안될때가 있습니다.
	Point p6 = p1 + 5; // p1.operator+(5 즉, int)  ok 멤버로 가능

	Point p6 = 5 + p1; // 5.operator+(p1) 은 만들수 없습니다. 멤버 로 안됩니다.
						// operator+(int, Point) 로 하면 됩니다. 
}

// 규칙
// 1.  .   .*  ::   sizeof   는 연산자 재정의 안됨.. 나머지는 가능.

// 2. [], (), ->  는 멤버함수로 만 가능

// 3. 우선순위는 바꿀수 없다.  => + 보다 *가 빠르다.

// 4. 인자의 갯수를 바꿀수 없다.  => operator+(int a, int b, int c) // error

