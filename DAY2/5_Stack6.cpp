#include <iostream>

// 버전 6. 내부 자료구조의 변경
//         1. 생성자에서 버퍼를 동적 메모리 할당
//		   2. "소멸자"에서 동적 할당된 버퍼를 delete[]
//         3. Stack 의 버퍼 크기를 "Stack 제작자" 가 아닌 "Stack 사용자"가 결정

// 그런데, Stack 사용자도 자신이 필요한 크기를 알수 있을까 ?
// =====> 동적 버퍼 보다는 "linked list" 등이 더 좋을수 있다.

class Stack
{
	int* buff; // 배열 대신 포인터
	int idx;
public:

	Stack(int sz = 10) 
	{
		buff = new int[sz];
		idx = 0; 
	}
	// 소멸자 : "~클래스이름()" 모양의 함수
	//          반환값도 없고, 인자도 가질수 없다.
	//			객체가 파되 될때 호출된다.
	//			필요한 경우(생성자에서 자원 할당한 경우)만 만들면 됩니다.
	~Stack()
	{
		delete[] buff; // 생성자에서 할당한 자원 해지
	}

	// 포인터도 배열 처럼 사용가능하므로 아래 코드는 
	// 변경될 필요 없다.
	void push(int n) { buff[idx++] = n; }
	int pop() { return buff[--idx]; }
};
int main()
{
//	Stack s1;      // 디폴트값인 10 사용
	Stack s1(100); // 생성자에 100 전달.

	s1.push(10);
	std::cout << s1.pop() << std::endl;
}
