// Stack.h
#pragma once

// Ŭ���� �ȿ��� ��� �Լ��� ���� �ִ� ���� ���� �Դϴ�.
// Stack.h ���� �Ʒ� ����� ������ ��������
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