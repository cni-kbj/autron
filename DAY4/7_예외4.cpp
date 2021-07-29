// noexcept
#include <iostream>

// 반환값이 없으면                              : void 사용
// 예외가 발생하지 않으면(절대 실패하지 않으면) : noexcept 를 표기하는 것이 좋습니다.

// 아래 foo는 예외 의 가능성이 있다는 의미 입니다.
void foo()	
{
	//....	
}
// 아래 goo는 컴파일러에게 예외 가능성이 없다고 알려주는 코드 입니다
// 컴파일러가 함수 구현을 보고 예외 여부를 판단할수 없습니다.
// 사용자가 "예외가 없다" 라고 알려주는 것입니다.
void goo() noexcept  
{
	//....	
}

int main()
{
	// 고급 기술에서 아래 같은 기술이 있습니다.
	bool b1 = noexcept( foo() ); // 이 함수 사용시 예외가 없는지 조사하는 것
	bool b2 = noexcept( goo() ); // 실제로 goo가 호출되는 것은 아닙니다.

	if (noexcept(goo()) == true) // goo는 예외가 없다... 안전하다.!!
		goo(); // 사용하자!!
	else
		다른 기법으로 하자;
}