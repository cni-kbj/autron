// 8_반복문 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문.
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// C++ 부터 새로운 for 문 도입됩니다.
	// range -for 라고 합니다. - C#, java 의 foreach, python : "for e in x" 와 유사
	//for (int n : x) // x 자리는 "배열", STL 의 list, vector 등 모두 가능
	for (auto n : x)
	{
		std::cout << n << std::endl;
	}


}
