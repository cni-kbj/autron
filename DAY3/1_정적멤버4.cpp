// 핵심 : static 멤버 함수에서는 static 멤버 데이타만  접근 할수 있습니다.
//	      일반 멤버 데이타는 접근할수 없습니다.
class Car
{
	int color;
	static int cnt; // 핵심 1. 객체가 없어도 cnt는 메모리에 
					//         있습니다.
public:
	// 다음중 에러를 모두 골라 보세요
	void foo()	
	{
		color = 0;	// 1. ok.. foo는 객체를 만든후 호출되므로 "color"는 메모리에 있습니다.
		cnt = 0;	// 2. ok
		goo();		// 3. ok
	}
	static void goo() // 핵심 2. 이 함수는 객체가 없어도 호출가능합니다.
	{
		color = 0;	// 4. error. 객체가 없이 호출가능하므로.. color 는 아직 메모리에 없을수
					//			 있습니다.
		cnt = 0;	// 5. ok.. cnt 는 항상 메모리에 있습니다.
		foo();		// 6. error.
	}
};
int Car::cnt; // 이 코드 때문에 메모리에 놓입니다.
int main()
{
	Car::goo(); // 객체 없이 호출 가능
}
