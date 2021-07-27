// 1_레퍼런스2
#include <iostream>
// 43 page
// 인자로 받은 변수의 값을 1증가 하고 싶다.
// 포인터와 레퍼런스 모두 "원본을 수정할수 있습니다."
// 그런데, 레퍼런스가 좀더 편리하긴합니다.
// 하지만, 포인터도 나쁘지는 않습니다.
void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a);  // int  n = a;  call by value, 원본 수정 안됨
	inc2(&b); // int* p = &b; call by pointer, 원본 수정됨
	inc3(c);  // int& r = c;  call by reference, 원본 수정됨.

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}

// pointer   : null pointer 가 존재 합니다. 항상 조심해야 합니다.
// reference : null reference 는 없습니다. 안전합니다.

void foo(int* p, int& r)
{
	// 포인터는 반드시 초기화가 필요한 것은 아닙니다.
	int* p1;  
	int* p2 = nullptr;

	if (p1 != 0) // p1 != nullptr 
	{
	}
	// 하지만 레퍼런스는 반드시 초기화 되어야 합니다.
	int n1 = 10;
	int& r1; // error
	int& r2 = n1; // ok..

	// 그래서, 
	// 인자 p : if 로 0이 아닌지 조사후 사용
	// 인자 r : 조사 없이 그냥 사용
}

void goo()
{
	int n = 10;
	int* p = &n;
	int** pp = &p; // 포인터의 포인터.. 이중 포인터는 존재 합니다.

	int& r = n;
	int& &rr = r; // 레퍼런스의 레퍼런스는 에러입니다. 

	int*& rp = p; // 포인터의 레퍼런스는 ok.
	int&* pr = &r; // 레퍼런스의 포인터는 error.

	// 레퍼런스 : 기존 변수에대한 별명.
}

