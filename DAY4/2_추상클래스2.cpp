#include <iostream>
#include <vector>

class Shape
{
	int color;
public:

	virtual ~Shape() {}   // Shape �� ��� Ŭ���� �̹Ƿ�
						  // ���� �Ҹ��ڷ� �ؾ� �Ѵ�.

	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	// 1. Shape �� ��� Ŭ���� ��Ȱ�� �ϰ�, ���� ��ü�� ������ ���� �����ϴ�.(�߻��� ����)
	// 2. ��� ���� ������ ����� ����� �ݵ�� "Draw" �� "Clone" �Լ��� �����ؾ� �մϴ�
	// Draw, Clone �� ���� �����Լ��� �ϴ� ���� �����ϴ�.
	virtual void Draw() = 0;
	virtual Shape* Clone() = 0;
};


class Rect : public Shape
{
public:
	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }

	virtual Shape* Clone()
	{
		Rect* p = new Rect;
		p->setColor(color);
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
		p->setColor(color);
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

			v.push_back(v[k]->Clone()); 
		}
	}
}
// ��� ����Ÿ : ��ü ������ �޸𸮿� ���Դϴ�
// ��� �Լ�   : �����Ͻÿ� exe �� ���Եǰ�
//				����� �ڵ� �޸𸮿� ���Դϴ�.
// "�������� ���� - ELF, PE"�� �н��� ������
/*
class Base
{
	int data1;
public:
	void f1() {}
};
class Derived : public Base
{
	int data2;
public:
	void f2() {}
};
int global_variable = 0;
int main()
{
	Base b;
	Derived d;
}
*/