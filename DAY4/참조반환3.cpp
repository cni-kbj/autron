// 참조반환3
#include <iostream>

class ostream
{
public:
	~ostream() { std::cout << "~ostream" << std::endl; }

	ostream foo()
	{
		return *this;
	}
};
ostream cout;

int main()
{
	cout.foo().foo().foo();   
}