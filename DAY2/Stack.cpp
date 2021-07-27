// Stack.cpp
// ==> 파일이름은 마음대로 변경해도 됩니다. Stack.h,  Stackimpl.cpp 등도 가능
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
