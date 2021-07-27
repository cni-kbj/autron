//square.h
#pragma once

// extern "C" : C++ 컴파일러에게
//				해당 함수가 C언어로 만들어져
//				있다고 알리는 것
// extern "C" int square(int a);

#ifdef __cplusplus
extern "C" {
#endif

	int square(int a);

#ifdef __cplusplus
}
#endif

// 함수를 만들어서 C/C++에서 모두 사용하고 싶습니다.
// 1. 함수 자체를 .c 로 해야 합니다. 
//    => 그래야 name mangling 이 없고, C에서 사용가능합니다.

// 2. 헤더 파일은 위처럼 만들어야 C/C++ 에서 모두 가져다 쓸수 있습니다.
//    "헤더 만드는 기술이 핵심" 입니다.