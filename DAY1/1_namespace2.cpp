// "github.com/codenuri/autron" 에 실시간으로 소스 올리 겠습니다.
// namespace 에 있는 함수는 접근하는 방법
#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}
namespace Video
{
	void init() { printf("Video init\n"); }
}
//using Audio::init;

void init() { printf("global init\n"); }

int main()
{
	// 1. 완전한 이름 사용
	Audio::init();

	// 2. using  declaration(선언) 사용  => 함수 안에 있을수 있고, 외부에 있을수도 있습니다.
	using Audio::init;
	init();	// 1. Audio::init 일까 ?
			// 2. global init 일까 ?
			// 3. 에러 일까 ?
			// ==> 함수 안에 있냐, 밖에 있냐에 따라 다릅니다.

	// 3. using directive(지시어) => namespace 내의 모든 요소를 namespace 이름없이
									// 접근
	using namespace Audio;	// Audio 안에 있는 모든 요소를 Audio 없이 접근
							// 함수 안또는 밖에 모두 가능.
	init();	
	
}


