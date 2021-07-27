// 4_OOP1.cpp     57 page
#include <iostream>

// 복소수 2개의 덧셈후 결과를 반환 하고 싶다.
// 문제점 : 함수는 한개의 값만 반환 할수 있다.
void Add(int ar, int ai, int br, int bi,  // in parameter
	     int* sr, int* si)				  // out parameter
{
	*sr = ar + br;
	*si = ai + bi;
}
int main()
{
	// 복소수 2개를 더하는 함수를 생각해 봅시다.
	int ar = 1, ai = 1; // 1 + 1i
	int br = 2, bi = 2; // 2 + 2i

	int sr, si;
	
	Add(ar, ai, br, bi, &sr, &si);
}
