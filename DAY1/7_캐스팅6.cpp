// 5_캐스팅6.cpp
#include <iostream>

bool is_little_endian()
{
	int n = 0x11223344;

	// endian 타입을 조사하려면
	// int 변수의 제일 앞 한 바이트만 꺼내야합니다.
//	char* p = (char*)&n; // C 스타일.
//	char* p = static_cast<char*>(&n); // error.
	char* p = reinterpret_cast<char*>(&n); // ok.

	if (*p == 0x44)
		return true;

	return false;
}

int main()
{
	bool b = is_little_endian();

	std::cout << b << std::endl;
}