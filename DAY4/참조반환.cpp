// ������ȯ.cpp
class Point
{
	int x, y;
};

// �Ʒ� 2�� �Լ��� ������ ������ ������. �޸� ���� ������ ������
void f1(Point  pt) {} // call by value     : ���纻 ��ü ������
void f2(Point& r)  {} // call by reference : ���纻 ��ü �����ȵ�.

int main()
{
	Point p;
	f1(p);
	f2(p);
}