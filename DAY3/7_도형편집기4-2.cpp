// 7_도형편집기4-2.   4번복사하세요.
#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
	
	// 자기 자신과 동일한 객체를 만드는 가상함수는 "아주 유용하게" 활용됩니다.
	virtual Shape* Clone()
	{
		Shape* p = new Shape;
		p->color = color; // 모든 멤버를 자신과 동일하게 설정하세요
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
		p->setColor(color) // 이것뿐 아니라,  
						   // Rect의 고유의 멤버도 모두 복사하세요
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
		p->setColor(color) // 이것뿐 아니라,  
						   // Circle의 고유의 멤버도 모두 복사하세요
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
			std::cout << "몇번째 도형을 복제할까요 >> ";

			int k;
			std::cin >> k;

			v.push_back( v[k]->Clone() ); // ok.. 다형성 기반의 설계. OCP 만족
									// k번째 도형이 무엇인지 조사할 필요 없습니다.
									// 새로운 도형이 추가되어도
									// 이 코드는 수정될 필요 없습니다.
		}
	}
}



