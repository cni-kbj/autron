#include <iostream>
#include <string>

// ��� ����� ������ �������� Ư¡�� ���� ���� �Ѵ�.
class People				// Base class(���Ŭ����), super class, parent class
{
	std::string name;
	int    age;
};

// Student �����, People �� ���� ��ӹ޾Ƽ� Ȯ���Ѵ�.
class Student : public People // Derived class(�Ļ� Ŭ����), sub class, child class 
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
