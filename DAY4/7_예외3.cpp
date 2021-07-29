// ���� ���� Ŭ����
#include <iostream>
#include <exception>

// ���� ���� Ŭ������ �����մϴ�.
class NetworkException 
{
	// ��Ʈ��ũ ���� ���� ���� �پ��� ���¸� Ÿ������ �����ϰ�
	int port_state;
public:
	NetworkException(int s) : port_state(s) {}	

	void print_state() const {}
};
class MemoryException {}; // �Ǵ� �ƹ� ����� ��� �˴ϴ�. 
						  // ����, Ŭ���� �̸����ε� ����� ������ �Դϴ�.
class FileNotFound {};

//================
// �Լ��� ���� ������ �ϳ��� �ƴҼ��� �ֽ��ϴ�.
int foo()
{
	// Ŭ�����̸�() : ���������� ���� ��ü�� �����Ҷ� ���
//	Point p(1, 2);
//	f1(p);           // �̷��� �ص� ������

//	f1( Point(1, 2) ); // �̷��Ե� �մϴ�.

	if (1)
		throw MemoryException(); 
	else if (2)
		throw FileNotFound();  // FileNotFound e; throw e;
	else if (3)
		throw NetworkException(3);

	return 0;
}

int main()
{
	try
	{
		foo();
	}
	catch (MemoryException& e)
	{
		//.....
	}
	catch (NetworkException& e)
	{
		//....
	}
	catch (...)  // ������ ó������ ���� ��� ���� ó��
	{	
		//....
	}

	// ���α׷� ��� ���� ����
}
// C#, java, python ���� �ٸ� ��ü���� ��� => ���ܸ� ���� ���� ���.. ������ ����
/*
try
{
	auto s = webClient("www.naver.com");
}
catch ()  // �߻� ������ ������ ���� ���� ó�� �ڵ�
catch ()
catch ()
*/
// C++ : �ɰ��� ��츸 ���� ���, �� �ܴ� ���� "��ȯ��"���� ���� ����
// ���� : ���� ���� �����Ǵ� "����� �ڵ�"�� ������尡 �� Ů�ϴ�.



