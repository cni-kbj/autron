#include <iostream>

// ����. ����ü �ȿ� �Լ��� �ִ� ������ ������ ??
//       ��Ȯ�� ���� ����!!

struct Stack
{
	int buff[10];
	int idx;
	// �Ʒ� 2���� ��� �Լ��� �ᱹ ������ �Ǹ� ���ڰ� �߰��˴ϴ�.
	//void push(int n) { buff[idx++] = n; }
	//int pop() { return buff[--idx]; }
};
// �����Ϸ��� �� �ڵ带 �Ʒ� ó�� ����
void push(Stack* s, int n) { s->buff[(s->idx)++] = n; }
int pop(Stack* s)          { return s->buff[--(s->idx)]; }

int main()
{
	Stack s1; // ��� ����Ÿ�� "���� �޸�"�� ���Դϴ�.
	s1.idx = 0;

	s1.push(10); // �� �ڵ�� �����Ϸ���
				 // push(&s1, 10) ���� �����մϴ�.

	std::cout << s1.pop() << std::endl;

}
