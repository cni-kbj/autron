// QA1.cpp

// func.h 만들고 아래 코드 넣으세요
       int Add1(int a, int b);
// 인라인 함수는 헤더에 선언과 구현이 모두 있어야 합니다.
//inline int Add2(int a, int b); // 선언만 있으면 사용못합
inline int Add2(int a, int b) { return a + b; }

template<typename T> T Add3(T a, T b); // 헤더에 함수 템플릿을 선언만


// func.cpp 만들고 아래 코드 넣으세요
int Add1(int a, int b) {return a + b;}
//inline int Add2(int a, int b) { return a + b; }

template<typename T> 
T Add3(T a, T b) { return a + b; }



// QA1.cpp 에 아래 코드 넣으세요
#include "func.h"

int main()
{
	Add1(1, 2);
	Add2(1, 2); // 왜 에러일까요 ?? 잘생각해 보세요.
	Add3(1, 2); // 템플릿 입니다. 템플릿의 원리를 생각하세요.
}

// 0. 컴파일은 "파일 별로 따로" 수행됩니다.

// 1. 함수 호출시 "call 주소"에서 주소를 완성 시점은 링커 입니다.

// 2. 인라인 함수의 치환은 "컴파일 시간" 입니다.
//    인라인 치환되려면 컴파일 시에 반드시 함수 구현을 알아야 합니다.
//    => 헤더에 인라인 함수 구현까지 넣으세요

// 3. 템플릿도 반드시 컴파일러가 완전한 구현을 알아야 합니다.
//   "헤더 파일에 구현까지 모두 넣으세요"
//   => 그래야, "템플릿" => "타입이 결정된 함수(클래스) 생성이 가능"
