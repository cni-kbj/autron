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
