// namespace alias
#include <algorithm>

namespace Test
{
	int min(int a, int b) { return b < a ? b : a; }
}

int main()
{
	int n = Test::min(1, 2);

	namespace Ax = Test;  // namespace alias 

	int n2 = Ax::min(1, 2);
}
// 선언과 구현 분리
// Audio.h
namespace Audio
{
	void init();
}

// Audio.cpp
#include "Audio.h"

// 방법 1.
namespace Audio
{
	void init() {}
}
// 방법 2. 클래스의 멤버함수를 만드는 표기법과 동일 - 가독성 측면에서 헷갈리수 있습니다.
//		   1번으로 하세요
void Audio::init() {}


