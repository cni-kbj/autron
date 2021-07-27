#include <iostream>

class Point
{
	int x, y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }			// 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }  // 2
};

int main()
{
	Point pt1;			// 1번 생성자 호출		
	Point pt2(0, 0);	// 2번 생성자 호출
	Point pt3{ 0, 0 };	// 2번 생성자 호출 => C++11부터
	Point pt4 = { 0, 0 };  // 2번 생성자 호출 => C++11 부터

//	Point pt5(1, 2, 3); // 객체를 생성하려면 반드시 생성자가 호출되어야 한다.
						// int 3개 생성자 없다.
						// error.

	Point arr[5]; // 1번 생성자 5회 호출

	Point arr2[5] = { Point(0,0), {1,1} }; // 2번 생성자 2회, 1번 생성자 3회

	Point* p;	// 객체를 만들것이 아니라 포인터 변수 생성 => 생성자 호출 안됨.

	p = (Point*)malloc(sizeof(Point));//"sizeof(Point)" 크기 만큼 메모리만 할당 => 생성자호출안됨
	free(p);

	p = new Point;  // new 는 객체의 생성. 즉 이 순간 (1) 메모리 할당  (2) 1번 생성자 호출
	delete p;		// (1) 소멸자가 있으면 호출  (2) 메모리 해지

	p = new Point(1, 1); // 2번 생성자 사용
	delete p;
}


