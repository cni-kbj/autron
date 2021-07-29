// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& os, const Point& pt);
};

// ����� ���� Ÿ���� cout ���� ����Ϸ��� �Ʒ� ó�� << �����ڸ� �������ϸ� �˴ϴ�.
ostream& operator<<(ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
//	int n = 10;
//	std::cout << n; // cout.operator<<(int)

	Point p(1, 2);
	std::cout << p ; // cout.operator<<(Point) �� ������ �Ǵµ�.. 
					// �̹� ������� �ִ� ostream Ŭ������ ����� �߰��Ҽ��� ����.
					// ������,,
					// operator<<(cout, p)  �� 
					// operator<<(ostream, Point) �� �־ �˴ϴ�.
					
					
					
}


