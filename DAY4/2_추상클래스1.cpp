// 3_추상클래스 - 168(216)page

// 추상 클래스(Abstract class) : 순수 가상 함수가 한개 이상 있는 클래스
// 특징 : 객체를 생성할수 없다.
// 의도 : 파생클래스 제작자들에 "특정멤버 함수"를 반드시 만들라고 지시하는 것.
class Shape
{
public:
	virtual void Draw()  = 0; // 순수 가상함수(pure virtual function )
							  // 특징 : 함수 구현이 없고, 선언뒤에 "= 0" 을 표기하는것
};
class Rect : public Shape
{
public:
	// 물려받은 순수 가상함수 Draw()의 구현부를 제공하지 않으면 
	// "Rect"도 추상클래스 입니다.
	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }
};

int main()
{
	Shape s; // error. 추상클래스는 객체를 만들수 없습니다. 
	Rect  r; // Draw()구현부를 제공하면 ok.. 아니면 error.
}


