#include <iostream>

// member field initialization
class Point
{
	// C++11 부터는 클래스 멤버 데이타를 만들때 바로 초기값 지정이 가능합니다.
	int x = 0;
	int y = 0;
public:
	// 위처럼 "필드 초기화가 있으면" 컴파일러가 생성자를 변경합니다.
	// 사용자 코드				컴파일러가 변경한 코드
	Point()						// Point() : x(0), y(0) 
	{
	}

	Point(int a) : y(a)			// Point() : x(0), y(a)
	{
//		y = 100; // 대입..되도록 여기서는 이렇게 하지말고 초기화 리스트 사용하세요
	}
};

int main()
{
	Point p(3); 

}




