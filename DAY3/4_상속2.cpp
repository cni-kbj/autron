// 5_상속2
// 상속과 접근 지정자
// C++의 접근지정자 : private, protected, public 입니다.
class Base
{
private:   int a; // 멤버 함수만 접근가능	
protected: int b; // 멤버 함수와 파생클래스의 멤버함수에서 접근 가능	
public:    int c; // 어디서든 접근 가능.	
};
class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. Base private 이므로
		b = 0;  // ok.    Base protected 이므로 
		c = 0;  // ok.    public
	}
};
int main()
{
	Base base;
	base.a = 0; // error. private
	base.b = 0; // error. protected
	base.c = 0; // ok.    public
}
