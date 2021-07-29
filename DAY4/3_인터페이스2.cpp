// 4_�������̽� - 171(219) page
#include <iostream>
#include <vector>

// ���� ���� ( tightly coupling )
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ����
//    Ŭ���� �̸��� ���� ����ϴ� ��.
//    �����ǰ�, ��ü �Ұ����� Ȯ�强 ���� ������

// void setCamera(Camera* p) : Cemera �� ������ �ִ�.!!!






class Camera
{
public:
	void startRecording() { std::cout << "start recording" << std::endl; }
	void stopRecording() { std::cout << "stop recording" << std::endl; }
};

// ������ ������.. ȭ���� ���� ������ ���ο� ī�޶� Ŭ������ ���Խ��ϴ�.
class HDCamera
{
public:
	void startRecording() { std::cout << "start HD recording" << std::endl; }
	void stopRecording()  { std::cout << "stop HD recording" << std::endl; }
};

//=========================
class Car
{
	Camera* pCamera = nullptr;
public:
	void setCamera(Camera* p) { pCamera = p; }

	void start() { pCamera->startRecording(); }
};

int main()
{
	Car c;
	Camera cam;
	c.setCamera(&cam); // ī�޶� ��ġ
	c.start();         // ���� ����

	HDCamera hc;
	c.setCamera(&hc); // ���ο� ī�޶� ��ġ ??? �ɱ�� ??
					  // error.. HDCamera �� �����ϰ� �ִµ�..
					  // setCamera()�� ���ڴ� "Camera*" �Դϴ�.!
}



