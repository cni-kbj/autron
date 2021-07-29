// 6_cout - 187(136)page
//#include <iostream>

// cout 의 원리를 구현해 봅시다.
#include <cstdio> // stdio.h

namespace mystd
{
	class ostream
	{
	public:
		void operator<<(int n)    { printf("%d", n); } // 실제 구현은 OS별 시스템콜사용
		void operator<<(double d) { printf("%d", d); } // 리눅스 : write( ... )
	};
	ostream cout; // cout 은 ostream 클래스 의 전역객체(변수) 입니다.
}

int main()
{
	int    n = 10;
	double d = 3.4;

	mystd::cout << n; // cout.operator<<(int)
	mystd::cout << d; // cout.operator<<(double)
}


