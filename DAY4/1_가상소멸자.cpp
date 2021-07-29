


// github.com/codenuri/autron   ���� 

// "DAY4_�����ҽ�" �����ø� �˴ϴ�.





#include <iostream>

// �ٽ�.
// "���" �������� ���Ǵ� ��� Ŭ������ �Ҹ��ڴ� �ݵ�� "�����Լ�"�� ������ �Ѵ�

// ����� ������� ���� Ŭ������ "�Ҹ��ڸ� �������� ���ʿ� ����."
// => 2���� ���� "stack" ��...

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	virtual ~Derived() { std::cout << "~Derived()" << std::endl; }
};
int main()
{
	// �Ʒ� �ڵ�� �ƹ� ���� �����ϴ�.
//	Derived* p = new Derived;
//	delete p; 

	Base* p = new Derived; // Derived ������ ȣ��
	delete p;	// �Ҹ��� ȣ���ؾ� �ϴµ�
				// �����Ϸ��� p�� Base* ��� �� �ۿ� �˼� �����ϴ�.
				// Base Ŭ������ �����ؼ� "�Ҹ��ڰ� �������� �ƴ��� ����"
				// 1) �����Լ��� �ƴϸ� static binding ���� �Ҹ��� ȣ��, 
				//   ==> Base �Ҹ��ڸ� ȣ��.
				// 2) �Ҹ��ڰ� �����Լ���, ���� ��ü�� ���������� ���� ȣ�� ����.
}