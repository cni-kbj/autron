// 예외2-1.cpp 만들어 보세요.
#include <iostream >

int foo()
{
	if (1)	
		throw 1;

	return 0;
}
int main()
{
	// 예외 가능성이 있으면 함수 호출 코드를 try 블럭 안에 넣어야 합니다.
	try
	{
		int ret = foo();
	}
	catch (int n)
	{
		// 여기서 발생된 예외에 대한 처리를 합니다.
		std::cout << "예외 발생" << std::endl;

		// 더이상 실행이 어려우면 여기서 종료합니다.
		//exit(-1);
	}
	std::cout << "continue main" << std::endl;
}