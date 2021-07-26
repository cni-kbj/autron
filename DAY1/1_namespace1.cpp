// 1_namespace.cpp - 교재 7 page
#include <stdio.h>
// namespace : 관련된 요소를 묶어서 관리할수 있고, 이름 충돌도 막을수 있다.
namespace Audio
{
	// Audio 관련, 구조체/함수/전역변수들...
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
	
	// 중첩될수 있습니다.
	namespace 2D
	{
	}
	namespace 3D
	{
	}
}

// global namesapce => 특정 이름공간에 포함되지 않은것!
void init() { printf("global init\n"); }

int main()
{
	init(); // global
	Audio::init();
	Video::init();
}

// github.com/codenuri/autron/ 에 실시간으로 소스 올리 겠습니다.
