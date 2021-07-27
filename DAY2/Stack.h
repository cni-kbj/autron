// Stack.h
#pragma once

// 클래스 안에는 멤버 함수의 선언만 넣는 것이 관례 입니다.
// Stack.h 만들어서 아래 선언부 복사해 놓으세요
class Stack
{
	int* buff;
	int idx;
public:
	Stack(int sz = 10);
	~Stack();
	void push(int n);
	int pop();
};