// 4_�������̽� - 171(219) page
#include <iostream>

// �ڵ��� Black Box ��� ������ ������
class Camera
{
public:
	void startRecording() {	std::cout << "start recording" << std::endl;	}
	void stopRecording()  {	std::cout << "stop recording" << std::endl;	}
};




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
}



