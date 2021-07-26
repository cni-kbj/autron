#include <iostream>

// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//          1. void*=> 다른 타입*,
//			2. 상속관계의 캐스팅 등.
//          3. 반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
	int    n = d; // ok.. 표준 타입끼리는 암시적 변환 가능. 컴파일시 경고가 나올수 있다

	int    n = static_cast<int>(d); // ok. 좋은 코드는 아니지면 암시적 변환도 가능하므로

	// void* => int* 변환
//	int* p1 = malloc(100);     // C언어 : ok. C++ : 에러

	int* p1 = static_cast<int*>( malloc(100) ); // ok.. 위험하지 않고 꼭 필요하다고 생각

//	const int c = 10;
//	int* p3 = (int*)&c; // C 캐스팅 ok

	// const int* => int* 로 ,, 즉, const 가 제거되는 캐스팅
	int* p3 = static_cast<int*>(&c); // error. 너무 위험하다.
}

