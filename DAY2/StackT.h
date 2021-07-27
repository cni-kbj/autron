// StackT.h
#pragma once

// StackT.h  ���� �Ʒ� "Stack" ������ ��������
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
	// T �� "int" �� �ƴ϶� "ũ�Ⱑ ū ����� ���� Ÿ���� �ɼ� �ִ�."
	// call by value => const reference �� ����
	void push(const T& n) { buff[idx++] = n; }

	T pop() { return buff[--idx]; }
};