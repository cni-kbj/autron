// 예제1     152 page
#include <iostream>
#include <vector>

class Shape
{
};

class Rect : public Shape
{
public:
	void Draw() { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void Draw() { std::cout << "Draw Circle" << std::endl; }
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
	}
}
// 왜 위 코드가 에러 일까요 ? 어디서 왜??


