#include <iostream>
#include <string>

// 모든 사람이 가지는 공통적인 특징을 먼저 설계 한다.
class People				// Base class(기반클래스), super class, parent class
{
	std::string name;
	int    age;
};

// Student 설계시, People 로 부터 상속받아서 확장한다.
class Student : public People // Derived class(파생 클래스), sub class, child class 
{
	int    id;
};

// C++   : class Student : public People
// C#    : class Student : People
// java  : class Student extends People
// python: class Student(People)

class Professor : public People
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
