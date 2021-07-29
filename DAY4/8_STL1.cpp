#include <iostream>
#include <list>
#include <vector>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// �迭�� ���� �ּҸ� �˸�, ++�������� "����� ����" �����մϴ�.
	int* p1 = x;
	std::cout << *p1 << std::endl;
	++p1;
	std::cout << *p1 << std::endl;

	//===================================
	// �ݺ���(iterator) : �����̳��� ���� ��Ҹ�
	//					����Ű�� ������ ��Ȱ�� ��ü
	//					"������"�� ������ �����ϴ�.
	auto p2 = s.begin();

	std::cout << *p2 << std::endl; // 1 

	++p2; // p2.operator++() �� ȣ��˴ϴ�.
	
	std::cout << *p2 << std::endl; // 2

}