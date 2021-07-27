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
int main()
{
//	int x = 100;

	BigData x;

	// 어떤 함수에서 인자의 값을 절대 수정하면 안된다면
	foo(x);
}
