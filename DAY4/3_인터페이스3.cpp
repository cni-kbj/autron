#include <iostream>

// ���ڽ� ī�޶� ������ ������ ����..
// ���ڽ� �����ڿ� �ڵ��� ������ ���̿� ���Ѿ� �ϴ� ��Ģ�� ���� ���� �Ѵ�.
// ��Ģ : ��� ���ڽ��� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�.
//        ==> �ݵ�� ��ӵ� 2���� �Լ��� ������ �����ϴ� ��.
class IBlackBoxCamera
{
public:
	virtual void startRecording() = 0;
	virtual void stopRecording() = 0;
};
// ��¥ ī�޶�� ������ "��Ģ�� �ִ�."
// ī�޶�� ����ϴ� Ŭ������ ���� ������� �ִ�... ��Ģ��θ� ����ϸ� �ȴ�.
class Car
{
	IBlackBoxCamera* pCamera; // �߻�Ŭ���� ��ü�� ����� ������, �����ʹ� ����� �ֽ��ϴ�.
public:
	void setCamera(IBlackBoxCamera* p) { pCamera = p; }
	void start()                       { pCamera->startRecording(); }
};

// ����, ��� ī�޶� �� ���鶧�� "IBlackBoxCamera" �� ���� �Ļ� �Ǿ�� �Ѵٴ� 
// ��Ģ�� ��Ű�� �˴ϴ�.

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



