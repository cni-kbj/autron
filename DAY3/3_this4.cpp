class Dialog
{
public:
	void Close() {} // void Close(Dialog* this) {} 입니다.1
	static void Close2() {}
};
void foo() {}

int main()
{
	// 함수 포인터 이야기..
	void(*f1)() = &foo; // ok.
//	void(*f2)() = &Dialog::Close; // 될까요 ? error. 인자로 this가 추가되는 함수
	void(*f3)() = &Dialog::Close2;// ok.. static 멤버 함수는 this 추가 안됩니다.
}

// 여기까지가 "하나의 타입(class)"를 설계 할때 필요한 문법 입니다.
// 즉, stack, list 같은 클래스 만들때 필요한 문법

// 1. 접근지정자(private, public)
// 2. 생성자/소멸자

// 3. 생성자에서 초기화리스트로 초기화 => C++에만 있는 개념.
// 4. static 멤버 데이타/static 멤버 함수 

// 5. 상수 멤버 함수 => C++에만 있는 문법. java, C# 등에는 없음
// 6. this, 멤버 함수 호출원리

// 7. 객체의 복사(복사생성자) <= 아직 안배움.. 내일! 약간어려운 주제
//===============================================================


