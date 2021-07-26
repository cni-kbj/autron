#include <iostream>

// 타입인자 2개를 가지는 템플릿 
template<typename T1, typename T2>
??? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int, double>(1, 2.1) << std::endl;

	// 이제 타입 인자 생략시. 컴파일러가 함수 인자로 타입인자 추론합니다.
	std::cout << Add(1, 2.1) << std::endl;
			// T1 = int, T2 = double 추론됩니다. 타입 추론 문제 없습니다.
			// 그런데..Add 리턴타입을 어떻게 적어야 할까요 ?
}

