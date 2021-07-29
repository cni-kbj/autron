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

// 사용자 정의 타입을 cout 으로 출력하려면 아래 처럼 << 연산자를 재정의하면 됩니다.
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
	std::cout << p ; // cout.operator<<(Point) 가 있으면 되는데.. 
					// 이미 만들어져 있는 ostream 클래스에 멤버를 추가할수는 없다.
					// 하지만,,
					// operator<<(cout, p)  즉 
					// operator<<(ostream, Point) 가 있어도 됩니다.
					
					
					
}


