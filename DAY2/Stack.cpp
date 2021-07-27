// Stack.cpp
// ==> �����̸��� ������� �����ص� �˴ϴ�. Stack.h,  Stackimpl.cpp � ����
#include "Stack.h"

Stack::Stack(int sz /* = 10 */)
{
	buff = new int[sz];
	idx = 0;
}
Stack::~Stack()
{
	delete[] buff;
}

void Stack::push(int n) { buff[idx++] = n; }

int Stack::pop()
{
	return buff[--idx];
}
