// 예제1     152 page
#include <iostream>
#include <vector>


class Shape
{
	int color;
public:

	int type; // 도형의 종류를 관리할 멤버 변수

	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};

class Rect : public Shape
{
public:
	
	Rect() { type = 1; }

	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }
};


class Circle : public Shape
{
public:
	Circle() { type = 2; }

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
			std::cout << "몇번째 도형을 복제할까요 >> ";

			int k;
			std::cin >> k;

			// 아래 처럼 했다면 어떨까요 ?
			switch (v[k]->type)
			{
			case 1: v.push_back(new Rect); break;
			case 2: v.push_back(new Circle); break;
			}
		}
	}
}



