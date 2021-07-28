// ����1     152 page
#include <iostream>
#include <vector>

// 5. OCP ��Ģ
//    ��� Ȯ�忡 �����ְ�(Open, Ŭ������ ���߿� �߰��Ǿ)
//    �ڵ� �������� ���� �־��(Close, �ý����� ���� �ڵ�� �������� �ʵ���)
//    ������ �϶�� ��Ģ(Principle)

//    Open-Close Principle(����-����� ��Ģ)

//   ��ü���� ���迡 ���� 5���� ��Ģ : SRP, OCP, LSP, ISP, DIP ( SOLID ��� �մϴ�.)

//  �Ʒ� �ڵ�� Draw�� OCP�� ���������� "���� ����" �κ��� OCP�� �������� ���մϴ�.
//						"��������"�κ��� ��� �ڵ��ؾ� �մϱ� ?==> "�߻����丮"������
//																	������ ������.




class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};


class Rect : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Circle" << std::endl; }
};

// �Ʒ� Ŭ������ "���߿�" �ý��ۿ� "�߰�" �Ǿ����ϴ�.
class Triangle : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Triangle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect);

		else if (cmd == 2)
			v.push_back(new Circle);

		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw(); // <==== �ٽ�!!!
							// ������(Polymorphism)
							// ������ �Լ��� ȣ���ϴ� �ڵ尡
							// ��Ȳ(���� ����Ű�� ��ü�� �����ΰ�)�� ���� �ٸ� �Լ� ȣ��

							// ��ü������ 3�� Ư¡ : ĸ��ȭ(private), ��Ӽ�, ������
		}
	}
}



