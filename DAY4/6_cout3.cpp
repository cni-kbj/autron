// 6_cout - 187(136)page
//#include <iostream>

// cout 의 원리를 구현해 봅시다.
#include <cstdio> // stdio.h

namespace mystd
{
	class ostream
	{
	public:
		ostream& operator<<(int n)         { printf("%d", n); return *this; }
		ostream& operator<<(double d)      { printf("%f", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	};
	ostream cout; 
}

int main()
{
	mystd::cout << "A" << "B" << "C";

	int    n = 10;
	double d = 3.4;

	mystd::cout << n; 
	mystd::cout << d; 
}


