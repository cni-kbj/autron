// 6_cout - 187(136)page
//#include <iostream>

// cout �� ������ ������ ���ô�.
#include <cstdio> // stdio.h

namespace mystd
{
	class ostream
	{
	public:
		void operator<<(int n)    { printf("%d", n); } // ���� ������ OS�� �ý����ݻ��
		void operator<<(double d) { printf("%d", d); } // ������ : write( ... )
	};
	ostream cout; // cout �� ostream Ŭ���� �� ������ü(����) �Դϴ�.
}

int main()
{
	int    n = 10;
	double d = 3.4;

	mystd::cout << n; // cout.operator<<(int)
	mystd::cout << d; // cout.operator<<(double)
}


