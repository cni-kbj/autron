#include <iostream>

int g = 10;

class Test
{
	int m1 = ++g;
public:
	Test() {}
	Test(int v) : m1(v) {}
};

int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 실행하지 말고 결과 예측해 보세요..
								// 1. 10    2. 11    3. 12  
}