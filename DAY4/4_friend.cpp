class Bike
{
private:
	int gear;	// private 이므로 "멤버 함수"만 접근 가능합니다.

public:
	void setGear(int g) { gear = g; } // ok..

	// friend 함수 문법 : 멤버함수가 아닌 일반 함수에서 "private" 멤버에 
	//					접근하게 하는 문법
	// 왜 언제 필요한가요 ? : 없어도 모든 구현 가능한데, 있으면 편리할때가 있습니다.
	//						==> 특히, 연산자 재정의 
	// 캡슐화를 깨게 되므로 나쁘지 않나요 ? 
	//						==> 네, 비판 많이 받는 문법, C++에만 존재
	//						    다른 대부분의 언어에 없는 문법.
	friend void FixBike(Bike& b);
};

void FixBike(Bike& b)
{
	b.gear = 10; // error. private 멤버 입니다.
				 // ok..   friend 로 등록되었다면
}

int main()
{
	Bike b;
	b.gear = 10; // error. private 멤버 입니다.

	FixBike(b);
}
