#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
// 2. C++ 버전
// 참조 : "자동 dererencing(*) 되는 포인터" 라고도 합니다.
namespace utils
{
	template<typename T>
	inline void Swap2(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}
#include <algorithm> // 이 안에 이미.. 위처럼 만들어진 C++ 표준 swap 이 있습니다.
int main()
{
	int x = 3, y = 2;
//	Swap(&x, &y);
//	utils::Swap2(x, y);

	std::swap(x, y); // C++ 표준 함수
					 // 위처럼 참조로 되어 있으므로 &x 가 아닌 x 전달하세요.
					// C++표준 라이브러리를 "Standard Template Library" => STL 이라고 합니다.
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



