// QA2.cpp

// square.h ���弼��

int square(int a);


// square.c ���弼��(���� !! �� ".c" �� �ϼ���)
int square(int a)
{
	return a * a;
}

// QA2.cpp (�� .cpp �� �ϼ���)
#include "square.h"

int main()
{
	square(3); // �� �����ϱ�� ??
}

