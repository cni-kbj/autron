// ����2-1.cpp ����� ������.
#include <iostream >

int foo()
{
	if (1)	
		throw 1;

	return 0;
}
int main()
{
	// ���� ���ɼ��� ������ �Լ� ȣ�� �ڵ带 try �� �ȿ� �־�� �մϴ�.
	try
	{
		int ret = foo();
	}
	catch (int n)
	{
		// ���⼭ �߻��� ���ܿ� ���� ó���� �մϴ�.
		std::cout << "���� �߻�" << std::endl;

		// ���̻� ������ ������ ���⼭ �����մϴ�.
		//exit(-1);
	}
	std::cout << "continue main" << std::endl;
}