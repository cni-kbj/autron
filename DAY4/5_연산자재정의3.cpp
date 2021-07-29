//  5_������������ - 182(131) page
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

	Point temp(p1.x + p2.x, p1.y + p2.y);	// private ��� �����ϴ� ���� �߻�
											// 1. getx(), gety() �Լ� ���� ���
											// 2. friend �Լ��� ���
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p5 = p1 + p2; // p1.operator+(p2) �� ������ ����ϰ�, ������
						// operator+(p1, p2)

	p5.print(); 

	// ��. ����� �ϸ� ���� ? �Ϲ� �Լ��� �մϱ� ?
	// ����� �ȵɶ��� �ֽ��ϴ�.
	Point p6 = p1 + 5; // p1.operator+(5 ��, int)  ok ����� ����

	Point p6 = 5 + p1; // 5.operator+(p1) �� ����� �����ϴ�. ��� �� �ȵ˴ϴ�.
						// operator+(int, Point) �� �ϸ� �˴ϴ�. 
}

// ��Ģ
// 1.  .   .*  ::   sizeof   �� ������ ������ �ȵ�.. �������� ����.

// 2. [], (), ->  �� ����Լ��� �� ����

// 3. �켱������ �ٲܼ� ����.  => + ���� *�� ������.

// 4. ������ ������ �ٲܼ� ����.  => operator+(int a, int b, int c) // error

