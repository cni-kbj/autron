#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

// STL �� 3�� ���
// 1. Container : list, vector�� ���� �ڷᱸ��
// 2. Iterator  : �����̳ʸ� �����Ҷ� ����ϴ� ������ ��Ȱ�� ��ü
// 3. Algorithm : find, sort �� ���� �Լ���(����Լ��� �ƴ� �Ϲ� �Լ�)

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// s �ȿ��� 3�� ã�� ���ô�.
	//s.find(3); // �̷��� ���� �ߴٸ�, list, vector �� ��� find�� �־�� �Ѵ�.
				// java ��Ÿ��

	auto p = std::find(s.begin(), s.end(), 3);

	if (p == s.end())
		std::cout << "����" << std::endl;
	else
		std::cout << "���� : " << *p << std::endl;

	// �˻� ������ 3�� �ִ� ��ġ(�ݺ���)��ȯ
	//      ���н� ������ ���� ��Ҹ� ����Ű�� �ݺ���(end()) ��ȯ
}

