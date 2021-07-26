// 3_변수5
// 23 page ~

// typedef int DWORD;
// typedef void(*PF)();

// C++ 에서도 typedef 사용해도 되지만..
// C++11 부터는 using 을 권장합니다.
// 아래 2줄은 위의 typedef 와 동일 합니다.
using DWORD = int;
using PF = void(*)();

// typedef 가 있는데 왜 ?? using 이 필요 합니까 ?
// typedef : 타입의 별칭 만 가능
// using   : 타입의 별칭 + 템플릿 별칭

int main()
{
	DWORD n; // int n
	PF    f; // void(*f)()
}

