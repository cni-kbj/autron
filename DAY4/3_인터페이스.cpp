// 4_인터페이스 - 171(219) page
#include <iostream>

// 자동차 Black Box 라고 생각해 보세요
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
	c.setCamera(&cam); // 카메라 설치
	c.start();         // 녹음 시작
}



