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
//	const int c = 10;
	int n = 10;
	const int c = n;

//	int* p = &c; // error. 상수의 주소를
				 // int* 에 담을수 없다.(const int* 는 담을수 있습니다.)

	int* p = (int*)&c; // ok.. 이것이 허용됩니다.(말도 안되는 캐스팅인데)

	*p = 20;
	
	// 아래 결과 예측해 보세요.
	std::cout << *p << std::endl;// 20
	std::cout << c << std::endl; // 이 코드가 얼마인지는 "표준에 정의 되어 있지 않습니다."
								 // 그래서, 컴파일러마다 다를수 있는데..
								 // 대부분 10입니다.
}


