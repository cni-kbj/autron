#include <iostream>

// Ÿ������ 2���� ������ ���ø� 
template<typename T1, typename T2>
??? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// ��Ȯ�� ǥ���
	std::cout << Add<int, double>(1, 2.1) << std::endl;

	// ���� Ÿ�� ���� ������. �����Ϸ��� �Լ� ���ڷ� Ÿ������ �߷��մϴ�.
	std::cout << Add(1, 2.1) << std::endl;
			// T1 = int, T2 = double �߷е˴ϴ�. Ÿ�� �߷� ���� �����ϴ�.
			// �׷���..Add ����Ÿ���� ��� ����� �ұ�� ?
}

