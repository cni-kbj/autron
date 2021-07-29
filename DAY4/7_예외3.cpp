// 예외 전용 클래스
#include <iostream>
#include <exception>

// 예외 전용 클래스를 설계합니다.
class NetworkException 
{
	// 네트워크 관련 예외 관련 다양한 상태를 타입으로 설계하고
	int port_state;
public:
	NetworkException(int s) : port_state(s) {}	

	void print_state() const {}
};
class MemoryException {}; // 또는 아무 멤버가 없어도 됩니다. 
						  // 단지, 클래스 이름으로도 충분히 설명적 입니다.
class FileNotFound {};

//================
// 함수의 실패 원인은 하나가 아닐수도 있습니다.
int foo()
{
	// 클래스이름() : 인자전달을 위한 객체를 생성할때 사용
//	Point p(1, 2);
//	f1(p);           // 이렇게 해도 되지만

//	f1( Point(1, 2) ); // 이렇게도 합니다.

	if (1)
		throw MemoryException(); 
	else if (2)
		throw FileNotFound();  // FileNotFound e; throw e;
	else if (3)
		throw NetworkException(3);

	return 0;
}

int main()
{
	try
	{
		foo();
	}
	catch (MemoryException& e)
	{
		//.....
	}
	catch (NetworkException& e)
	{
		//....
	}
	catch (...)  // 위에서 처리되지 않은 모든 예외 처리
	{	
		//....
	}

	// 프로그램 계속 실행 가능
}
// C#, java, python 등의 다른 객체지향 언어 => 예외를 정말 많이 사용.. 모든것이 예외
/*
try
{
	auto s = webClient("www.naver.com");
}
catch ()  // 발생 가능한 수없이 많은 예외 처리 코드
catch ()
catch ()
*/
// C++ : 심각한 경우만 예외 사용, 그 외는 아직 "반환값"으로 실패 전달
// 이유 : 예외 사용시 생성되는 "어셈블리 코드"가 오버헤드가 꽤 큽니다.



