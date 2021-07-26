#include <iostream>

// 타입인자 2개를 가지는 템플릿 
template<typename T1, typename T2>
//decltype(a + b) Add(T1 a, T2 b)  // 의미상으로는 맞지만 문법적 에러입니다.
								   // a,b 를 선언전에 사용하는 코드입니다.
// auto Add(T1 a, T2 b) -> decltype(a + b)  // ok.. 정확한 표기법.. C++11 부터

auto Add(T1 a, T2 b) // C++14 부터는 auto 만 표기해도 됩니다.
					 // 그런데, 위코드와는 약간차이가 있습니다.
{
	return a + b;
}

// auto           a = 배열;      a 는 포인터 타입
// decltype(배열) a;             a 는 배열 타입


int main()
{
	// 정확한 표기법
	std::cout << Add<int, double>(1, 2.1) << std::endl;

	// 이제 타입 인자 생략시. 컴파일러가 함수 인자로 타입인자 추론합니다.
	std::cout << Add(1, 2.1) << std::endl;
			// T1 = int, T2 = double 추론됩니다. 타입 추론 문제 없습니다.
			// 그런데..Add 리턴타입을 어떻게 적어야 할까요 ?

//	a = 20; // error. 변수를 선언전에 사용
//	int a = 0;	
//	a = 20;		// ok. 선언후 사용
}

