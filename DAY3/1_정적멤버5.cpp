// 1_정적멤버5.cpp  3-1번 복사해오세요..
#include <iostream>

// 1. static 멤버 데이타의 외부 선언의 위치는 아무곳이나 상관없지만
//    클래스 선언 바로 아래 놓는것이 관례 입니다.

// 2. 클래스 선언(.h)과 구현(.cpp) 로 분리하는 경우

// Car.h
class Car
{
	int color;
	static int cnt;
public:
	Car();
	~Car();
	static int getCount();
};

// Car.cpp
#include "Car.h"
int Car::cnt = 0;		// static 멤버 데이터의 외부 선언은 "구현파일(.cpp)" 에 놓아야 합니다.
						// 관례상 윗부분에 놓습니다.
Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

int Car::getCount() { return cnt; }  // static 멤버 함수를 선언과 구현으로 분리시
									 // 선언에만 static 을 표기 합니다


int main()
{
	std::cout << Car::getCount() << std::endl; /
}

// 현재..
// 1. C보다 발전된 C++문법(함수, 변수등.., auto, template, overloading, new )

// 2. stack 이 필요하면 "stack" 타입을 만들어서 사용하자. 
//    타입을 만드는 문법 => "class 문법"
//    A. 생성자/소멸자
//    B. private/public
//    C. 생성자에서 초기화 리스트
//    D. static 멤버 데이타, 멤버 함수
//    E. 상수 멤버 함수
//    F. this

// 3. 상속
// 4. STL 사용법
// 5. 예외, 연산자 재정의등의 기타 문법들.
