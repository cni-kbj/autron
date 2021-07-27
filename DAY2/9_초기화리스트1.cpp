// 6_초기화리스트1    85page ~
#include <iostream>
// 핵심 1. 멤버 데이타 초기화는 "항상 초기화 리스트"를 사용하세요
//      2. 생성자 블럭안에서 초기화는 "제어문 또는 반복문등이 필요할때만 사용" 하세요
class Point
{
	int x, y;

	const int c; // const 변수는 반드시 초기화 필요 합니다!!

public:
	// 멤버 초기화 리스트(member initializer list) 
	// => 생성자 () 뒤에 : 을 적고 멤버를 초기화 하는 것
	Point(int a  = 0, int b = 0) : x(a), y(b), c(10)  // 대입이 아닌 초기화.
	{
//		x = a; 
//		y = b; // 대입.
//		c = 10; // ?? 될까요 ? error. 상수는 대입될수 없습니다.
	}
};



int main()
{
	Point pt(0, 0);

	int b = 10; // 초기화. 만들면서 넣는것. int 가 아닌 user type 이면 "생성자"로 초기화

	int a;	// 만든후에				user type 이면   이때 "생성자"
	a = 10; // 대입.  넣는것						 이때 "대입연산자" 라는 함수 호출
			//									     즉, 2회의 함수 호출 발생

}




