#include <iostream>

// 약한 결합 ( Loosely coupling )

// => 하나의 클래스가 다른 클래스 사용시 "규칙을 담은 기반 클래스(추상클래스)" 를
//    통해서 접근하는 것
//    교체 가능한, 확장성 있는 유연한 디자인의 핵심..

// 추상 클래스 : 규칙(순수 가상함수) + 다른 멤버도 있을때 사용하는 용어
//													==> 도형편집기의 "Shape"
// 인터 페이스 : 규칙(순수 가상함수) 만 가진 클래스를 부르는 용어


// 블랙박스 카메라를 무조건 만들지 말고..
// 블랙박스 제작자와 자동차 제작자 사이에 지켜야 하는 규칙을 먼저 설계 한다.

// 규칙 : "모든 블랙박스는 아래 클래스로 부터 파생되어야 한다."  ==> 이렇게 표현하지 말고.
//        ==> 반드시 약속된 2개의 함수를 만들라고 지시하는 것.
//        "모든 블랙박스는 아래 인터페이스를 구현해야 한다." ==> 이렇게 표현합니다.
class IBlackBoxCamera
{
public:
	virtual void startRecording() = 0;
	virtual void stopRecording() = 0;

	virtual ~IBlackBoxCamera() {} // 인터페이스는 결국 기반 클래스이므로
								// 문법상 "소멸자를 꼭 가상함수"로 하는 코드를 넣어야 합니다
								// C++에서만 필요
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
class UHDCamera : public IBlackBoxCamera
{
public:
	void startRecording() { std::cout << "start UHD recording" << std::endl; }
	void stopRecording() { std::cout << "stop UHD recording" << std::endl; }
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

	UHDCamera uhc;
	c.setCamera(&uhc); // Car 클래스의 수정없이 새로운 언제라도 "새로운 카메라"를 부착할수 있다
						// 단, "규칙"을 지키는 카메라 이어야 한다.
	c.start();
}



