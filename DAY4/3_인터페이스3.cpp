#include <iostream>

// 블랙박스 카메라를 무조건 만들지 말고..
// 블랙박스 제작자와 자동차 제작자 사이에 지켜야 하는 규칙을 먼저 설계 한다.
// 규칙 : 모든 블랙박스는 아래 클래스로 부터 파생되어야 한다.
//        ==> 반드시 약속된 2개의 함수를 만들라고 지시하는 것.
class IBlackBoxCamera
{
public:
	virtual void startRecording() = 0;
	virtual void stopRecording() = 0;
};
// 진짜 카메라는 없지만 "규칙이 있다."
// 카메라는 사용하는 클래스를 먼저 만들수도 있다... 규칙대로만 사용하면 된다.
class Car
{
	IBlackBoxCamera* pCamera; // 추상클래스 객체는 만들수 없지만, 포인터는 만들수 있습니다.
public:
	void setCamera(IBlackBoxCamera* p) { pCamera = p; }
	void start()                       { pCamera->startRecording(); }
};

// 이제, 모든 카메라 를 만들때는 "IBlackBoxCamera" 로 부터 파생 되어야 한다는 
// 규칙만 지키면 됩니다.

class Camera : public IBlackBoxCamera
{
public:
	void startRecording() { std::cout << "start recording" << std::endl; }
	void stopRecording() { std::cout << "stop recording" << std::endl; }
};

class HDCamera : public IBlackBoxCamera
{
public:
	void startRecording() { std::cout << "start HD recording" << std::endl; }
	void stopRecording() { std::cout << "stop HD recording" << std::endl; }
};
int main()
{
	Car c;
	Camera cam;
	c.setCamera(&cam);
	c.start();        

	HDCamera hc;
	c.setCamera(&hc); 
	c.start();
}



