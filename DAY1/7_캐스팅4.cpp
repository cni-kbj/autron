// const_cast : 

int main()
{
	const int c = 10;

	// const int* => int*
	int* p1 = &c;       // error. 암시적 변환 안됨
	int* p2 = (int*)&c; // ok.. 그런데, 너무 위험하다.. 하지만 C 캐스팅의 성공.
	
	int* p3 = static_cast<int*>(&c); // error
	int* p4 = reinterpret_cast<int*>(&c); // error. 서로 다른 타입 캐스팅 할수 있지만
										  // 상수성을 제거 할수는 없습니다.

	int* p4 = const_cast<int*>(&c); // ok.. 동일 타입의 상수성 제거
									// const int* =>int*

	// 마지막 으로 "dynamic_cast" 가 있는데.. 상속을 알아야 합니다.(상속 배울때 설명)

}
