// 5_ĳ����6.cpp
#include <iostream>

bool is_little_endian()
{
	int n = 0x11223344;

	// endian Ÿ���� �����Ϸ���
	// int ������ ���� �� �� ����Ʈ�� �������մϴ�.
//	char* p = (char*)&n; // C ��Ÿ��.
//	char* p = static_cast<char*>(&n); // error.
	char* p = reinterpret_cast<char*>(&n); // ok.

	if (*p == 0x44)
		return true;

	return false;
}

int main()
{
	bool b = is_little_endian();

	std::cout << b << std::endl;
}