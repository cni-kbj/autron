// 10_캐스팅1.cpp    48 page
#include <iostream>

// C 언어의 캐스팅은 "너무나 위험" 합니다.
// 논리적으로 잘못된 것도 "거의 허용" 합니다

/*
int main()
{
	int n = 3;

//	double* p = &n; // error. 그런데, 오래된 C 컴파일러는 허용합니다.

	double* p = (double*)&n; // C/C++ 모두ok..  그런데, 너무 위험하다.!
			
	*p = 3.4; // 이순간의 메모리를 생각해 봅시다.

}
*/

int main()
{
	const int c = 10;

	int* p = &c;

	*p = 20;
	
	std::cout << *p << std::endl;
	std::cout << c << std::endl;
}


