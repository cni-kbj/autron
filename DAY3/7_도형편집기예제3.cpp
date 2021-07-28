// 예제1     152 page
#include <iostream>
#include <vector>

// 5. OCP 원칙
//    기능 확장에 열려있고(Open, 클래스가 나중에 추가되어도)
//    코드 수정에는 닫혀 있어야(Close, 시스템의 기존 코드는 수정되지 않도록)
//    디자인 하라는 원칙(Principle)

//    Open-Close Principle(개방-폐쇄의 원칙)

//   객체지향 설계에 대한 5가지 원칙 : SRP, OCP, LSP, ISP, DIP ( SOLID 라고 합니다.)

//  아래 코드는 Draw는 OCP를 만족하지만 "도형 생성" 부분은 OCP를 만족하지 못합니다.
//						"도형생성"부분은 어떻게 코딩해야 합니까 ?==> "추상팩토리"패턴을
//																	공부해 보세요.




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

// 아래 클래스는 "나중에" 시스템에 "추가" 되었습니다.
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
				p->Draw(); // <==== 핵심!!!
							// 다형성(Polymorphism)
							// 동일한 함수를 호출하는 코드가
							// 상황(실제 가리키는 객체가 무엇인가)에 따라 다른 함수 호출

							// 객체지향의 3대 특징 : 캡슐화(private), 상속성, 다형성
		}
	}
}



