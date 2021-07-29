//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 다음중 어떤 코드가 보기 좋을 까요 ?
//	Point p3 = Add(p1, p2); // C 스타일의 "일반 함수" 사용
	 
//	Point p4 = p1.Add(p2);  // 객체지향의 "멤버 함수" 사용. => java 라면 이렇게 구현.
							// 물론 C++도 되지만,, C++은 아래 방법선호.

	Point p5 = p1 + p2;    // 정수(실수) 2개를 + 할수 있듯이
						   // 사용자 정의 타입도 + 할수 있게 하자 => 연산자 재정의 개념

				// C++에서 +도 함수 입니다. 함수 이름은 "operator+" 입니다.
				// 1) p1.operator+(p2) 를 찾게 됩니다.
				// 2) (1)이 없으면 "operator+(p1, p2)" 를 찾게 됩니다.
}

