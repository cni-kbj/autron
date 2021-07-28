#include <iostream>

// 방법 3. static 멤버 데이타
// 1. static 이 붙은 멤버 데이타
// 2. 클래스 외부에도 선언을 만들어야 합니다.
// 3. 객체를 한개도 생성하지 않아도, 메모리에 놓입니다.(전역변수와 life cycle이 완벽히 동일합니다.)
// 4. 객체를 생성시 "static 멤버데이타는" 객체 메모리에 놓이지는 않습니다. 크기로 계산안됨

class Car
{
	int color;
public:
	
//	int cnt = 0;	// 일반 멤버 데이타.. 객체당 한개 입니다.
	static int cnt; // static(정적) 멤버 데이타. 모든 객체가 공유 합니다.
					// ==> 반드시 클래스 외부에도 선언해야 합니다.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;
	
	std::cout << sizeof(c1) << std::endl; // 4 (speed 멤버만 크기로 계산)

	// 정적 멤버 데이타 접근 방법
	// 1. 클래스 이름으로 접근 : Car::cnt 
	// 2. 객체이름으로 접근    : c1.cnt
	//							  ==> 그런데 이렇게 하면 cnt 가 일반 멤버인지 static 인지
	//								  가독성이 좋지 않습니다.
	//								  되도록이면 클래스 이름으로 접근하세요.!!
	std::cout << Car::cnt << std::endl;  // 
	std::cout << c1.cnt   << std::endl;  // 
}

// C 언어 "static 전역변수"   : 해당 파일에서만 사용
// 클래스 "static 멤버데이타" : 모든 객체가 공유하는 멤버