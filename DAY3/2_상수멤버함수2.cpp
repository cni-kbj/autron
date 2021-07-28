// 핵심 : 상수 멤버 함수는 선택이 아닌 "필수문법" 입니다.
//       객체의 상태를 수정하지 않은 모든 멤버 함수(getter)는
//       반드시 상수 함수로 해야 합니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }

	void setWidth(int a) { w = a; } // 이 경우는 const 멤버 함수가 될수 없습니다.!!
									// 멤버 값이 수정되므로
};

//void foo(Rect r)      // call by value : 복사본에 의한 오버헤드가 있습니다.
void foo( const Rect& r) // call by value 보다 "const 참조" 사용하세요
{
	int n = r.getArea(); // 호출되게 하려면 반드시 "getArea"를 상수 멤버함수로 해야합니다
					
}			

int main()
{
	Rect r(1, 1, 10, 10);  // 상수 객체 아님.!!
	int n = r.getArea();   // ok.
	foo(r);
}



