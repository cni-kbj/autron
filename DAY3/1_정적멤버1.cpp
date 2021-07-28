// github.com/codenuri/autron   에서
// DAY3_사전소스 받으시면 됩니다.

// "Debug", "x86"







// 3_정적멤버1 - 110 page
#include <iostream>

// 목표 : Car 객체를 몇개 생성했는지 알고 싶다.
// 1. cnt 변수를 멤버 데이타로 추가 => 실패!
class Car
{
	int color;
	//....
public:
	int cnt = 0; // 일반 멤버 데이타 
				 // ==> 객체당 한개씩 만들어 진다

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl; // 1
	std::cout << c2.cnt << std::endl; // 1
}

