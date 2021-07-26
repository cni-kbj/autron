int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	// double* p = &c; // error

	// C캐스팅으로 하면 쉽습니다.
	double* p = (double*)&c; // ok..

	// C++ 캐스팅으로 해보세요.
//	double* p1 = static_cast<double*>(&c); // error

//	double* p1 = reinterpret_cast<double*>(&c); // error. c 가 const 이므로
												// reinterpret 는 const 제거안됨

//	double* p1 = const_cast<double*>(&c); // error. const_cast는 "동일타입"에서 
											// const 제거

	// 아래 처럼 해야 합니다.
	double* p1 = reinterpret_cast<double*>( const_cast<int*>(&c) ); // ok
}





