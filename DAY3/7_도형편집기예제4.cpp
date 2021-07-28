// ����1     152 page
#include <iostream>
#include <vector>


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

			// k��° ������ ������ ������ ���� v�� �߰��մϴ�.
			// �׷���, k��° ������ ����� ?
			// ��� ������ �ұ�� ??  
		}


	}
}



