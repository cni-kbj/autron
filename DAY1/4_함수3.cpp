// C++ 함수 특징 3. inline   .. 32page

// 인라인 함수 : 함수 호출식, 함수로 이동이 아니라, 기계어 코드를 치환해달라는것.
// 장점 : 빠르다.
// 단점 : 치환이 많아지만 목적코드(실행파일) 크기가 커질수 있다.
       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  
	int n2 = add2(1, 2);  
}

// gcc 컴파일러, g++
// visual studio 의 컴파일러 : cl.exe

// "개발자 명령프롬프트에서 소스 가 있는 폴더로 이동"

// cl 4_함수3.cpp /FAs			=> 하면 "4_함수3.asm" 이 생성됩니다.
// cl 4_함수3.cpp /FAs /Ob1	   /Ob1 : 인라인 치환해 달라.		 

// g++ 4_함수3.cpp -S       => 4_함수3.s  파일 생성됩니다
// g++ 4_함수3.cpp -S -O2   -O2 : 최적화 해달라.		



// notepad 4_함수3.asm 으로 열어보세요