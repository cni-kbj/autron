#include <iostream>

// 방법 2. 전역변수 사용
//  ==> 전역변수는 객체숫자에 상관없이 오직 한개 이므로 
//      모든 객체가 공유한다.
//  ==> 객체의 갯수를 파악하는데.. 성공..
//  ==> 그런데, 전역변수는 어디서라도 접근 가능하므로 안전하지 않다.
//      접근지정자로 보호할수 없을까 ????
int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;
//	cnt = 0; // 사용자가 실수 했다..

	std::cout << cnt << std::endl; // 2
}

