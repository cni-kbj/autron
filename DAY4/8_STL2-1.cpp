#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>   // accumulate �� ������� �ֽ��ϴ�.

int main()
{
	std::list<int>   v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// ��� ��Ҹ� ������ �˰���� std::reverse() �Դϴ�.
	// v�� ��� ��Ҹ� ������ ������
	// �ٽ� 1. �˰����� "����� �ƴ� �Ϲ� �Լ�" �Դϴ�.
	//      2. ���ڴ� �׻� "�ݺ����� ��" �Դϴ�
	std::reverse( v.begin(), v.end() );

	for (auto e : v)
		std::cout << e << std::endl;

	//===================
	int n = std::accumulate(v.begin(), v.end(), 0); // int sum = 0 ���� �����϶�� ��
	
	std::cout << n << std::endl;

	// Ư�� ����� �ϴ� �Լ��� �ʿ��ϸ� ������ ���� "STL"���� ���� ã�ƶ�!
}

// �ٽ� : 1. �˰����Լ��� "����� �ƴ� �Ϲ��Լ�" �Դϴ�.
//        2. ��� ���� <alogorithm> �ʿ�

// cppreference.com �� �ͺ�����. ù��° ȭ�鿡�� "Algorithm Library" ����(������ �� 3��°)
