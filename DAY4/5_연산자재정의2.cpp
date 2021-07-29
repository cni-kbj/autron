//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// ��� �Լ��� ������ + �Լ�
	// ==> ���� �����ڸ� ��� �Լ��� �����, ���ڰ� �Ѱ��� �˴ϴ�. 
	// ==> p1 + p2 => p1.operator+(p2)�̹Ƿ�
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

	// 1. ��� �Լ��� �����ϴ� ���.
	Point p5 = p1 + p2;   // p1.operator+(p2)

	p5.print(); // 3, 3
}

