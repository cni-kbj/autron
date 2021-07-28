// 예제1     152 page
#include <iostream>
#include <vector>

// 파워 포인트 같이 "도형을 편집"하는 프로그램을 만들어 봅시다.

// 1. 모든 도형을 타입화 하면 편리하다.

// 2. (A) 모든 도형은 공통의 특징이 있다.
//    (B) 모든 도형을 묶어서 하나의 vector에 관리하고 싶다.
//    ==> 공통의 기반 클래스가 있으면 묶을수 있다

class Shape
{
};

class Rect : public Shape
{
	// 멤버데이타와 생성자는 생략..
public:
	void Draw() { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void Draw() { std::cout << "Draw Circle" << std::endl; }
};
int main()
{
//	std::vector<Rect*> v; // Rect만 보관하는 vector
	std::vector<Shape*> v; // 모든 도형을 보관할수 있는 vector
}



