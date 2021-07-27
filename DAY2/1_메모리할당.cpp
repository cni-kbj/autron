
// 1. github.com/codenuri/autron  에서 "DAY2_사전소스" 받으시면 됩니다



// 2. "Debug", "x86" 으로 설정하세요



// 3. 빌드후 에러 있으면 "Windows SDK 버전" 설정해 주세요
//    ==> 프로젝트메뉴, 속성 메뉴 에서..












// 2_메모리할당 - 52 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일 : malloc 대신 new 사용
	int* p1 = new int;
	delete p1;

	int* p2 = new int[10]; // 배열모양으로 할당

//	delete p2; // "undefined, 미정의 동작" 발생.	
			   // 표준문서에서는 이렇게 하지 말라고만 되어 있다.!!
			   // 이렇게 사용시 어떤 현상이 나오는지는
				// 컴파일러마다 다르다... 
	delete[] p2; // 주의.. 배열 할당된 주소는 delete 가 아닌 delete[]	
}
//				malloc(free)					new(delete)
// 정체 :       표준 함수						연산자(키워드)
// 반환타입 :   void* 이므로 캐스팅해서담는다	정확한 타입 반환
// 결정적차이 : 생성자 호출이 안됨              생성자가 호출됨.
