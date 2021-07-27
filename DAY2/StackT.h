// StackT.h
#pragma once

// StackT.h  만들어서 아래 "Stack" 복사해 넣으세요
template<typename T>
class Stack
{
	T* buff;
	int idx;
public:
	Stack(int sz = 10)
	{
		buff = new T[sz];
		idx = 0;
	}
	~Stack()
	{
		delete[] buff;
	}
	// T 는 "int" 뿐 아니라 "크기가 큰 사용자 정의 타입이 될수 있다."
	// call by value => const reference 가 좋다
	void push(const T& n) { buff[idx++] = n; }

	T pop() { return buff[--idx]; }
};