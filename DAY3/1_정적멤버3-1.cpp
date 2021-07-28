#include <iostream>
// static 멤버 데이타 : 모든 객체가 공유하는 멤버 데이타.
//					   ==> 결국 전역변수와 유사하지만,
//					   ==> 접근 지정자로 보호 가능한 특징

// static 멤버 함수 : 객체가 없어도 호출가능한 멤버 함수
//  호출 방법
//  (A) 클래스이름::함수()   ==> 권장.!!
//  (B) 객체이름.함수()      ==> 일반 멤버 인지 static 멤버인지 구별 안됨

class Car
{
	int color;
	static int cnt; 
public:					
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; }        // 객체가 있어야 호출 가능
	static int getCount() { return cnt; } // 객체가 없어도 호출 가능
};
int Car::cnt = 0; // private 에 있어도.. 선언부 이므로 이렇게 할수 있습니다.

int main()
{
	// Car::cnt 는 객체가 없어도 메모리에 있습니다.
	// 여기서 자동차의 갯수(Car::cnt)를 얻을수 없을까요 ?
	std::cout << Car::getCount() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << sizeof(c1) << std::endl; 
//	std::cout << Car::cnt << std::endl;  // error. private.. 
	std::cout << c1.getCount() << std::endl;
}