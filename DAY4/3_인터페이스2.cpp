// 4_인터페이스 - 171(219) page
#include <iostream>
#include <vector>

// 강한 결합 ( tightly coupling )
// => 하나의 클래스가 다른 클래스 사용시
//    클래스 이름을 직접 사용하는 것.
//    경직되고, 교체 불가능한 확장성 없는 디자인

// void setCamera(Camera* p) : Cemera 만 받을수 있다.!!!






class Camera
{
public:
	void startRecording() { std::cout << "start recording" << std::endl; }
	void stopRecording() { std::cout << "stop recording" << std::endl; }
};

// 세월이 지나서.. 화질을 더욱 좋아진 새로운 카메라 클래스가 나왔습니다.
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
	c.setCamera(&cam); // 카메라 설치
	c.start();         // 녹음 시작

	HDCamera hc;
	c.setCamera(&hc); // 새로운 카메라 설치 ??? 될까요 ??
					  // error.. HDCamera 를 전달하고 있는데..
					  // setCamera()의 인자는 "Camera*" 입니다.!
}



