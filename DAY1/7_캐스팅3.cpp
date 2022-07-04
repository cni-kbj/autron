#include <iostream>

// reinterpret_cast 

int main()
{
	double d = 3.4;
	int    n =  d; 

	// int* => double*
//	double* p1 = (double*)&n; // ok.. 그런데.. 너무 위험하다.

	// double* p2 = static_cast<double*>(&n); // error. 논리적으로 맞지않다.
											// 혹시, 실수 아닌가 ?
	// 위험한지 아는데.. 그래도 필요하다.(다양한 이유로)
	double* p3 = reinterpret_cast<double*>(&n); // ok.. 서로 다른 타입의 주소 캐스팅

	*p3 = 3.4; // 하지만 절대 이렇게 하지는 마세요!!
				// 단지, 주소를 보관하는 용도 정도만 사용

	// reinterpret_cast : 되도록 사용하지 마세요.
	// 용도.. 
	// 1. 임베디드에서 특정메모리를 강제로 double* 로 할때
	// 2. 다중상속에서 필요할때 있습니다 => 수요일
	
}

