#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. �ݺ����� �ǹ�!
	// �����̳��� ���� ������ ������� ������ ������� ���� ����
//	auto p = s.begin();
	auto p = v.begin();

	++p;
	int n = *p;

	// 2. begin, end
	auto p1 = s.begin(); // ó�� ��Ҹ� ����Ű�� �ݺ���(������ó�� �����ϼ���)
	auto p2 = s.end();   // ���� !! �������� �ƴ� ������ ����.

	*p2 = 10; // bug.. runtime error. end()�� ���� �ݺ��ڴ� *p2 ���� ������

	// �����ǵ��� end()�� ������ ������ ����Ű�� �ϴ°��� �Ʒ� ���� �ڵ� �ۼ��� 
	// ���մϴ�.
	while (p1 != s.end())
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

	// 3. �ݺ����� ��Ȯ�� Ÿ���� �����մϴ�. 
	//    �˾� �α� �ϴµ�, ���������� auto ����ϼ���
	std::list<int>::iterator   p3 = s.begin();
	std::vector<int>::iterator p4 = v.begin();

	auto p5 = s.begin(); // �� p3�� ����
}





