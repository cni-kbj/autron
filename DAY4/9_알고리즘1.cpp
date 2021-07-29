#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool foo(int n) { return n % 3 == 0;  }

int main()
{
	std::vector<int> v = { 1,6,3,4,5,7,3,8,9,10 };
		
	
	// "��"�� �˻�
	auto p = std::find(std::begin(v), std::end(v), 3); 


	// find �� ���� generic �ұ� ?
	// �־��� �������� ó�� ������ 3�� ����� ã�� �ʹ�.

	// find_if �� ������ ���ڷ� "�Լ�"�� �޽��ϴ�.
	// find_if �� 3��° ���ڴ� "bool�� ��ȯ�ϴ� �����Լ�" �� �����ؾ� �մϴ�.
	auto p2 = std::find_if(std::begin(v), std::end(v), foo );



	std::cout << *p2 << std::endl; // 6


	return 0;
}





