// 3_변수6.cpp   25 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

//	int x = pt.x;
//	int y = pt.y;
	// 파이썬 : x, y = pt 

	// C++17 부터 한줄로 구조체의 모든 항목 접근 가능
	// "structure binding" 이라는 문법입니다.
	auto[x, y] = pt;	// 1. auto 만 가능.. int[x,y] = pt; // error
						// 2. 배열도 가능.   auto[a,b] = arr;
						// 3. 갯수가 맞아야 합니다.
	int arr[3] = { 1,2,3 };
	auto[a, b, c] = arr;  // a = 1, b = 2, c = 3

//	int* p = arr;
//	auto[a, b, c] = p; // error. p는 배열이 아니라 포인터 이므로
}
// 컴파일러면 디폴트 버전
// visual studio 2017/2019 : C++14
// G++ 8.x ~               : C++14

// g++ 소스이름.cpp  -std=c++17

// cl  소스이름.cpp  /std:c++17  또는 /std:c++latest
// (cl 은 visual studio 컴파일러 이름)

// 프로젝트메뉴 - 속성메뉴 선택후,  "C/C++" 항목 "명령줄" 선택후
//						오른쪽 아래 박스에 "/std:c++latest" 넣으세요.
