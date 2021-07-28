// 7_����������4-2.   4�������ϼ���.
#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
	
	// �ڱ� �ڽŰ� ������ ��ü�� ����� �����Լ��� "���� �����ϰ�" Ȱ��˴ϴ�.
	virtual Shape* Clone()
	{
		Shape* p = new Shape;
		p->color = color; // ��� ����� �ڽŰ� �����ϰ� �����ϼ���
		return p;
	}
};

class Rect : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }

	virtual Shape* Clone()
	{
		Rect* p = new Rect;
		p->setColor(color) // �̰ͻ� �ƴ϶�,  
						   // Rect�� ������ ����� ��� �����ϼ���
		return p;
	}
};

class Circle : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Circle" << std::endl; }

	virtual Shape* Clone()
	{
		Circle* p = new Circle;
		p->setColor(color) // �̰ͻ� �ƴ϶�,  
						   // Circle�� ������ ����� ��� �����ϼ���
		return p;
	}
};

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
				p->Draw();
		}

		else if (cmd == 8)
		{
			std::cout << "���° ������ �����ұ�� >> ";

			int k;
			std::cin >> k;

			v.push_back( v[k]->Clone() ); // ok.. ������ ����� ����. OCP ����
									// k��° ������ �������� ������ �ʿ� �����ϴ�.
									// ���ο� ������ �߰��Ǿ
									// �� �ڵ�� ������ �ʿ� �����ϴ�.
		}
	}
}



