// 4_상속3-2.cpp    상속1-1 복사하세요..
#include <iostream>
#include <string>

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
	Student(int n) : id(n) {}
};

int main()
{
	Student s(12345); // 왜??.. 몇번째 줄이 에러일까요 ?
}
