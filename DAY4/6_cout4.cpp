#include <cstdio> // stdio.h

namespace mystd
{
	class ostream
	{
	public:
		ostream& operator<<(int n)         { printf("%d", n); return *this; }
		ostream& operator<<(double d)      { printf("%f", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }

		// ���ڰ� �Լ� ������ �� ����
		ostream& operator<<( mystd::ostream& (*f) (mystd::ostream&) )
		{ 
			f(*this); // �̰� ���� �Դϴ�. �� ������ ������.
			return *this; 
		}
	};
	ostream cout;
}
// endl �� �Ʒ� ó�� �Ǿ� �ֽ��ϴ�.
mystd::ostream& endl(mystd::ostream& os)
{
	os << "\n";
	return os;
}

mystd::ostream& tab(mystd::ostream& os)
{
	os << "\t";
	return os;
}


int main()
{
	int n = 10;

	mystd::cout << endl; // endl �� ��ü�� ����Ե� "�Լ� �Դϴ�"
						// cout.operator<<( �Լ�������) �� ����Դϴ�.
	endl( mystd::cout );   // �� �ڵ尡 �� �ڵ�� ���� �մϴ�

	mystd::cout << "A" << tab << "B" << endl; // C++ ǥ�ؿ� "tab"�� �����ϴ�
												// ����� ���ô�.
}


