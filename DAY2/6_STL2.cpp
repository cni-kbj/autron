// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  
#include <list>

int main()
{	
	int x[3] = { 1,2,3 }; // C ������ �迭�� ���� ����մϴ�.

	std::vector<int> v = { 1,2,3 }; // vector�� �迭ó�� ���ӵ� �޸� �Դϴ�.
	
	// ������ �����մϴ�.
	x[0] = 10;
	v[0] = 10;

	// �׷���, vector�� �ξ� �����ϴ�.
	x.resize(5); // error. �迭�� ũ�� ���� �ȵ˴ϴ�.
	v.resize(5); // ok.. 5��¥�� ũ�� vector
}

