// 4_���3-2.cpp    ���1-1 �����ϼ���..
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
	Student s(12345); // ��??.. ���° ���� �����ϱ�� ?
}
