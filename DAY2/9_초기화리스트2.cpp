#include <iostream>

// 핵심 1. 객체 생성시
//			(A) 멤버(ptFrom, ptTo)의 생성자가 먼저 호출되고..
//          (B) 객체 자신(Rect r)의 생성자가 호출된다.

// 2. 디폴트 생성자가 없는 타입을 멤버로 가진 경우..
//	  반드시 초기화 리스트에서 초기화 해야 합니다. 

class Point
{
	int x, y;
public:
//	Point()				: x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};
class Rect
{
//	int n = 0; // C/C++에서 구조체(클래스) 멤버 만들때 이렇게 초기화 못합니다.
				// 그냥.. "int n" 으로만 해야 합니다.(단, C++11부터 가능합니다.)
//	Point ptFrom(1, 2); // 그래서 이렇게 초기화도 안됩니다.

	Point ptFrom;
	Point ptTo;
public:
	// 핵심.. 디폴트 생성자가 없는 타입을 멤버로 넣으려면 
	//        반드시 아래 처럼 초기화 리스트에서 초기화 해야 합니다.
	Rect() : ptFrom(0, 0), ptTo(10, 10)
	{
//		ptFrom(1, 2); // ?? error. 이 코드는 ptFrom()이라는 함수를 호출 하는 모양입니다.
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; 
}




