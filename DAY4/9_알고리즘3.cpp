#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// �ٽ� : �˰���(����� �ƴ� �Ϲ��Լ�)�� ������ �̸��� ��� �Լ��� �ִٸ�
//        �˰��� ���� "����Լ��� ����ض�"
// ==> list ���� remove �Ҷ��� "��� �Լ� remove" �� ����.

int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   v = { 1,2,3,1,2,3,1,2,3,1 };

	// v�� list �� �Ʒ� �ڵ�� �� ����˴ϴ�.. �׷���!!!! ������ ����� ?
//	auto p = std::remove(v.begin(), v.end(), 3);

//	v.erase(p, v.end());


	// list �� �ڷ� ���� Ư����.. 
	// ��Ҹ� ã�������� �޸𸮸� �����ϴ� ���� ȿ�����Դϴ�.
	// �׷���, "��� �Լ�" remove �� ������ �����˴ϴ�.
	v.remove(3); // 3�� ã�������� �޸� ����



	for (auto n : v)
		std::cout << n << std::endl;

	return 0;
}


