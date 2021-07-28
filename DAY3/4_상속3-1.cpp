// ��Ӱ� ������.   135page ~
#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	Derived()      { std::cout << "Derived()" << std::endl; }
	
	// �Ʒ� ó���� ����� ������ Base�� ����Ʈ �����ڰ� ȣ��˴ϴ�.
	// ==> �����Ϸ��� "Derived(int a) : Base() {}" �� ����

	//Derived(int a) { std::cout << "Derived(int)" << std::endl; }

	// ��� Ŭ������ �ٸ� �����ڸ� ȣ���Ϸ��� �ݵ�� �Ʒ� ó�� ���� ȣ�� �ؾ� �մϴ�.
	Derived(int a) : Base(a) { std::cout << "Derived(int)" << std::endl; }

	~Derived()     { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d1;	
	Derived d2(5);
}




