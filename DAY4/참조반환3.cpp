// 참조반환3
#include <iostream>

class ostream
{
public:
	~ostream() { std::cout << "~ostream" << std::endl; }

	ostream  foo() 	{	return *this;	}
	ostream& goo()	{	return *this;	}
};
ostream cout;

int main()
{
//	cout.foo().foo().foo();   

	cout.goo().goo().goo();

	// 아래 코드의 원리가 return *this 인데.. cout 의 복사본을 반환할필요는 없습니다.
	// 그래서 "ostream& operator<<(타입)" 으로 만들게 됩니다.
	cout << "A" << "B" << "C";
}
