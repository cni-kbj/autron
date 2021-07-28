// 예제1     152 page
#include <iostream>
#include <vector>

// 3. 모든 도형의 공통의 특징은 반드시 Shape 에도 있어야 한다.
//    그래야 모든 도형을 Shape* 묶어서 사용할때
//    해당 기능을 사용할수 있다

// 4. 기반 클래스 멤버 함수중 파생 클래스가 재정의 하게 되는 멤버 함수는
//    반드시 가상함수로 만들어야 한다.
//    Shape 를 처음 만들때 부터 각 멤버 함수를 가상으로 할지/안할지 디자인 되어야 합니다
//    ==> 아래 코드에서 "색상 관련 함수"는 파생 클래스가 변경할 이유가 없습니다.
//        그래서 "virtual 로 안함"

//    ==> Draw()는 각 도형마다 변해야 합니다. 즉, 다시 만들어야 합니다.
//        virtual 로 설계되어야 합니다.

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	// Shape 는 결국 기반 클래스이고 객체 생성할일이 없습니다.(new Rect, new Circle만 있고
	//															new Shape는 없습니다.)
	// 아래 처럼 구현이 있어야 하나요 ??
	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
//	virtual void Draw() = 0; // 최종적으로는 이렇게 되야 합니다(순수 가상함수와 추상클래스문법)
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
int main()
{
	std::vector<Shape*> v; 

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back( new Rect );

		else if (cmd == 2)
			v.push_back( new Circle );

		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();
		}
	}
}
// 왜 위 코드가 에러 일까요 ? 어디서 왜?? - 해결


