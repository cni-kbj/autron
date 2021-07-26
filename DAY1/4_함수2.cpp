#include <cstdio>
// 4_함수2 
// C 언어   : 동일한 이름의 함수를 2개이상 만들수 없다.
// C++ 언어 : 동일한 이름의 함수를 2개이상 만들수 있다. 인자의 갯수나 타입이 다르면
// "함수 오버로딩"이라는 문법 
// 주의 사항.

void f1(int a) {}
void f1(int a, int b) {} // ok

void f2(int a) {}
void f2(int a, int b = 0) {} // error
f2(3);

void f3(int a) {}
int f3(int a)  { return 0; } // error
f3(3); // 함수 호출시 리턴값은 고려 안하므로.. 어느 함수인지 알수 없다.


int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}
