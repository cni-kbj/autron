// 5_생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	// 1. 리턴 값은 없지만 인자는 있을수 있습니다.
	// 2. 따라서, 여러개 만들수 있습니다

	// 3. 사용자가 한개도 만들지 않으면
	//   => 컴파일러가 인자 없는 생성자 제공, 아무일도 하지 않는 모양
	//   => "디폴트 생성자(default constructor)" 라고 합니다.

//	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
//	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

int main()
{
	Point pt1;      // 1번 생성자	
	Point pt2(1,2); // 2번 생성자
}

