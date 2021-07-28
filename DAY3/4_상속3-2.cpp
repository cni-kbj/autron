// 4_상속3-2.cpp    상속1-1 복사하세요..
#include <iostream>
#include <string>
// 1. 기반 클래스에 디폴트 생성자가 없으면
//    ==> 반드시 파생 클래스 생성자 만들때, 기반 클래스 생성자를 명시적으로 호출해야 합니다.
class People			
{
	std::string name;
	int    age;
public:
	People(std::string n, int a) : name(n), age(a) {}
};

class Student : public People 
{
	int    id;
public:
	//						  // 컴파일러가 아래 처럼 "People()" 을 추가했습니다.
							  // 그런데, People는 디폴트 생성자가 없습니다.
//	Student(int n) : id(n) {} // => Student(int n) : People(), id(n) {}

	Student(std::string name, int age, int n) : People(name, age), id(n) {}
};

int main()
{
//	Student s(12345); // 왜??.. 몇번째 줄이 에러일까요 ?
	Student s("kim", 20, 12345); // ok.. 
}
