#include <iostream>
#include <vector>

class Shape
{
	int color;
public:

	virtual ~Shape() {}   // Shape 는 기반 클래스 이므로
						  // 가상 소멸자로 해야 한다.

	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	// 1. Shape 는 기반 클래스 역활만 하고, 직접 객체를 생성할 일은 없습니다.(추상적 존재)
	// 2. 모든 실제 도형을 만드는 사람은 반드시 "Draw" 와 "Clone" 함수를 제공해야 합니다
	// Draw, Clone 은 순수 가상함수로 하는 것이 좋습니다.
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
			std::cout << "몇번째 도형을 복제할까요 >> ";

			int k;
			std::cin >> k;

			v.push_back(v[k]->Clone()); 
		}
	}
}
// 멤버 데이타 : 객체 생성시 메모리에 놓입니다
// 멤버 함수   : 컴파일시에 exe 에 포함되고
//				실행시 코드 메모리에 놓입니다.
// "실행파일 포맷 - ELF, PE"를 학습해 보세요
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