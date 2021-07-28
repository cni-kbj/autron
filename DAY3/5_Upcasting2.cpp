// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

int main()
{
	Dog* arr[10];          // Dog만 보관하는 배열
	std::vector<Dog*> v1;  // Dog 만 보관하는 vector

	std::vector<Animal*> v2; // 동종(동일 기반 클래스를 가진 클래스)을 보관하는 vector
							// 즉, 모든 동물.
							// 단, 각 동물의 고유 멤버 접근은 안됨.

}
//=================
class Item
{
};
class File : public Item
{
};
class Folder : public Item
{
	// Folder 는 File 뿐 아니라 Folder도 보관한다.

	// File, Folder는 공통의 기반 클래스가 필요 한다.
	std::vector<Item*> v;
};
// 상속
// 1. 기존 클래스를 확장해서 새로운 클래스 설계
// 2. 관련된 클래스를 묶어서 관리할 때도 필요!!