#include <iostream>

// Ŭ������ �����Լ��� ������ �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
void* animal_vtable[] = { Animal Ÿ������, &Animal::Cry, &Animal::Run };

class Animal
{
	void* vtptr = animal_vtable; // �����Ϸ��� �߰��� ��� �Դϴ�.
								 // �� ��� ������ ��ü�� ũ�Ⱑ Ŀ���ϴ�.
	int age;
public:
	virtual void Cry() {}
	virtual void Run() {}
};
// Animal a1, a2;

//====================================================
void* dog_vtable[] = { Dog Ÿ������, &Dog::Cry, &Animal::Run };

class Dog : public Animal
{
	vptr = dog_vtable; // 

	int color;
public:
	virtual void Cry() {}
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry(); 
	// 1. Cry �� ������ �ƴϸ� ������ Animal Cry
	// 2. �����Լ���� �����Ͻÿ� �Ʒ� �ڵ� ����
	//    "p->vtptr[1]()"
	//		1�� ���° �����Լ������� ��Ÿ��.
}

// �����Լ���
// A. �޸� �������
//   ==> Ŭ������ �����Լ� ���̺��� �������
//   ==> ��ü�� �ϳ��� vtptr ������ �������

// B. ����ð� �������
//   ==> ȣ���, ���̺� ������ �ּҸ� ������ ȣ�� �ϹǷ�
//       �ణ�� ���� �߻�


