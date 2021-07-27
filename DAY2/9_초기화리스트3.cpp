#include <iostream>

// 초기화 리스트에 놓인 순서가 아닌..
// 멤버가 놓인 순서대도 초기화 됩니다.

// ==> 초기화 리스트 코드 작성시, 꼭 멤버가 놓인 순서대로 초기화 코드 작성하세요
class Point
{
public:
//	int x, y;
	int y, x;

	Point() : y(0), x(y)
	{
	}
};
int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




