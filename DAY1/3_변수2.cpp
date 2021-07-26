#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 20page - 중요한 변화.!
	int n = 10;
	int x[3] = { 1,2,3 };
	Point p1 = { 1,2 };
	// People p("kim", 20) // 클래스는 () => 내일 등장

	// 변수의 종류에 상관없이 "일관된 방식(uniform)" 으로 초기화 하자.
	// "uniform initialization" 이라는 문법 - C++11에서 도입.
	int n = { 10 };
	int x[3] = { 1,2,3 };
	Point p1 = { 1,2 };
	// People p = {"kim", 20}; // 클래스도

	// = 이 없어도 됩니다.
	int n { 10 };
	int x[3]{ 1,2,3 };
	Point p1{ 1,2 };
	// People p {"kim", 20}; // 클래스도

	// 장점
	int n1 = 3.4; // 데이타 손실이 있지만 에러가 아닙니다. 좋지 않습니다.
	int n2 = { 3.4 }; // error. 데이타 손실이 있는 경우 에러 입니다.
	int n3{ 3.4 }; // error
}



