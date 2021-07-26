#include <iostream>

//#define Add(x, y) ((x) + (y) ) // 타입에 독립적일수 있지만 
								// Add(++n, ++n) 이렇게 하면.. 완전한 버그..
								// 매크로는 너무 위험 합니다. 되도록 금지.!!

int Add(int a, int b)
{
	return a + b;
}
double Add(double a, double b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2 ) << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;
}

