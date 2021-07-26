// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿

// 함수 오버로딩 덕분에 "일관된 형태의 라이브러리 구축"이 쉽습니다.
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 함수의 구현이 유사한 경우. 
// 함수를 만들지 말고, 함수를 만드는 틀을 제공합니다.  - C++의 아주 중요한 특징
// 함수 템플릿은 보통 "인라인" 으로 하는 경우가 많습니다.
template<typename T> 
inline T square(T a)
{
	return a * a;
}

int main()
{
	// square 는 "함수가 아닌" 함수를 찍어내는 "틀" 입니다.
	square<int>(3);		// int square(int) 함수를 생성후 사용
	square<double>(3.4);// double square(double) 함수를 생성후 사용

	// 위 코드는 정확한 코드 입니다.
	// 그런데, 아래 처럼 "타입 인자" 생략 가능합니다.
	// 타입 인자 생략시 - 컴파일러가 함수 인자를 보고 타입인자를 추론합니다.
	// "타입인자"와 "함수 인자"를 헷갈리지 마세요
	square(3);
	square(3.4);
}

// cl 4_함수4.cpp /FAs   로 어셈보면 함수가 실제로 2개 있습니다. int 버전과 double 버전.
