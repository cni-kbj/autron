#include <cstdio> // stdio.h

namespace mystd
{
	class ostream
	{
	public:
		ostream& operator<<(int n)         { printf("%d", n); return *this; }
		ostream& operator<<(double d)      { printf("%f", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }

		// 인자가 함수 포인터 인 버전
		ostream& operator<<( mystd::ostream& (*f) (mystd::ostream&) )
		{ 
			f(*this); // 이게 전부 입니다. 잘 생각해 보세요.
			return *this; 
		}
	};
	ostream cout;

	// endl 은 아래 처럼 되어 있습니다.
	mystd::ostream& endl(mystd::ostream& os)
	{
		os << "\n";
		return os;
	}
}
mystd::ostream& tab(mystd::ostream& os)
{
	os << "\t";
	return os;
}

int main()
{
	int n = 10;
	mystd::cout << mystd::endl; // endl 의 정체는 놀랍게도 "함수 입니다"
						// cout.operator<<( 함수포인터) 의 모양입니다.
	mystd::endl( mystd::cout );   // 이 코드가 위 코드와 동일 합니다

	mystd::cout << "A" << tab << "B" << mystd::endl; // C++ 표준에 "tab"은 없습니다
												// 만들어 봅시다.
				// cout.operator<<(tab)
}


