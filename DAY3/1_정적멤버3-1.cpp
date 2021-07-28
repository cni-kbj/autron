#include <iostream>
// static ��� ����Ÿ : ��� ��ü�� �����ϴ� ��� ����Ÿ.
//					   ==> �ᱹ ���������� ����������,
//					   ==> ���� �����ڷ� ��ȣ ������ Ư¡

// static ��� �Լ� : ��ü�� ��� ȣ�Ⱑ���� ��� �Լ�
//  ȣ�� ���
//  (A) Ŭ�����̸�::�Լ�()   ==> ����.!!
//  (B) ��ü�̸�.�Լ�()      ==> �Ϲ� ��� ���� static ������� ���� �ȵ�

class Car
{
	int color;
	static int cnt; 
public:					
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int getCount() { return cnt; }        // ��ü�� �־�� ȣ�� ����
	static int getCount() { return cnt; } // ��ü�� ��� ȣ�� ����
};
int Car::cnt = 0; // private �� �־.. ����� �̹Ƿ� �̷��� �Ҽ� �ֽ��ϴ�.

int main()
{
	// Car::cnt �� ��ü�� ��� �޸𸮿� �ֽ��ϴ�.
	// ���⼭ �ڵ����� ����(Car::cnt)�� ������ ������� ?
	std::cout << Car::getCount() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << sizeof(c1) << std::endl; 
//	std::cout << Car::cnt << std::endl;  // error. private.. 
	std::cout << c1.getCount() << std::endl;
}