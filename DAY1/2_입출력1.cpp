#include <cstdio>
#include <iostream> 

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	scanf("%d", &n);	   // 입력

	// C++ style
	std::cout << "n = " << n << std::endl;  // std::endl 은 "/n" 의 의미!

	std::cin >> n;  // 1. &n 이 아니라 n 입니다.
					// 2. ">>" 방향에 주의 하세요.
}
