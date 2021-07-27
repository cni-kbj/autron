// QA2.cpp

// square.h 만드세요

int square(int a);


// square.c 만드세요(주의 !! 꼭 ".c" 로 하세요)
int square(int a)
{
	return a * a;
}

// QA2.cpp (꼭 .cpp 로 하세요)
#include "square.h"

int main()
{
	square(3); // 왜 에러일까요 ??
}

