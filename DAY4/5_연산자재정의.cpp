//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// ������ � �ڵ尡 ���� ���� ��� ?
//	Point p3 = Add(p1, p2); // C ��Ÿ���� "�Ϲ� �Լ�" ���
	 
//	Point p4 = p1.Add(p2);  // ��ü������ "��� �Լ�" ���. => java ��� �̷��� ����.
							// ���� C++�� ������,, C++�� �Ʒ� �����ȣ.

	Point p5 = p1 + p2;    // ����(�Ǽ�) 2���� + �Ҽ� �ֵ���
						   // ����� ���� Ÿ�Ե� + �Ҽ� �ְ� ���� => ������ ������ ����

				// C++���� +�� �Լ� �Դϴ�. �Լ� �̸��� "operator+" �Դϴ�.
				// 1) p1.operator+(p2) �� ã�� �˴ϴ�.
				// 2) (1)�� ������ "operator+(p1, p2)" �� ã�� �˴ϴ�.
}

