// 1_레퍼런스3. 45 page
// ==> 가장 중요한 핵심 개념.. 꼭 기억하세요..
struct BigData
{
	int buff[1024];
};

//void foo(int n) // call by value : 원본변수를 변경하지 않을것 이라는 약속
//void foo(BigData n) // call by value 이므로 원본 수정 안된다.
					//				그런데, 복사본이 생성되므로 메모리 사용량 증가
void foo( const BigData& n) // "const reference(참조)" 로 인자 받기 => C++에서 가장
{							// 널리 사용하는 코딩 스타일
}
void goo(const BigData* p) 
{
//	p->멤버 = 값; // error. p가 상수를 가리키므로 error
}
int main()
{
//	int x = 100;
	BigData x;

	// 어떤 함수에서 인자의 값을 절대 수정하면 안된다면
	foo(x);	// const reference 로 받을때
	goo(&x);// const pointer 로 받을때.
}
// 원본을 수정되지 않게 하려고 합니다..다음중 좋은 코드는 ?
void hoo(int a)        {} // 1.. 이코드가 좋습니다.
void hoo(const int& a) {} // 2

// 함수 인자를 받는 방법 정리.!!
// 1. 원본 변수의 값을 변경해야 한다면
//	 => 참조 또는 포인터 모두 좋은데.. 요즘은 참조가 더 많이 사용
void foo(int* p) {}
void foo(int& r) {} 

// 2. 원본 변수의 값을 변경하지 않으려면
//   A. 인자가 primitive type(int, double) => call by value
void foo(int n) {}

//   B. 인자가 user define type(UDT, 구조체/클래스) => const reference 가 좋습니다.
void foo(const Point& pt) {}
