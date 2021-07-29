// 6_cout - 187(136)page
#include <iostream>

// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	// printf 는 '%d' 등을 표기하는데 cout은 없어도 되는 원리는 아래코드 입니다.
	std::cout << n; // std::cout.operator<<(int)
	std::cout << d; // std::cout.operator<<(double)
	
}


