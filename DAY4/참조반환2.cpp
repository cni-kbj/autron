// ������ȯ.cpp
class Point
{
	int x, y;
};

Point pt; // ��������

Point f1() // return by value : pt�� �ƴ� pt�� ���纻�� ��ȯ�ϰ� �˴ϴ�.
{
	return pt;
}
Point& f2() // return by reference : ���Ͽ� ���纻�� ������ ����� �ǹ�
{
	return pt;
}

Point& f3()
{
	Point temp; // �������� �Դϴ�.
	return temp;// bug... ���� ���������� ���� ��ȯ�ϸ� �ȵʴϴ�.
				// �� f2 �ڵ�� �������� �̹Ƿ� ���� ��ȯ�� �ϴ� ���Դϴ�.
				// ���������� ����� �� Ÿ������ ��ȯ�ؾ� �մϴ�.
}


int main()
{
	f1();
	f2();
}