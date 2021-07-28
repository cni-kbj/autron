#include <iostream>
// this 는 언제 어떻게 활용하나요 ?
class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
//		x = x;	// 이경우 x는 인자의 x입니다.(양쪽 모두)
//		y = y;

		// 활용 1. 멤버 데이타임을 확실히 나타내고 싶을때(이름충돌등의 경우)
		this->x = x;
		this->y = y;
	}
	// 활용 2. this 또는 *this를 반환하면 멤버 함수의 호출을 연속적으로 할수 있습니다.
	Point* foo() { return this; }
	Point  goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo(); // 멤버함수의 연속적 호출가능(this 반환 하므로)
	p1.goo().goo().goo(); 

	// 아래 코드의 원리가 "return *this" 입니다.!
	std::cout << "A" << "B" << "C" << std::endl;
}

