// 참조반환.cpp
class Point
{
	int x, y;
};

// 아래 2개 함수의 차이점 생각해 보세요. 메모리 상태 예측해 보세요
void f1(Point  pt) {} // call by value     : 복사본 객체 생성됨
void f2(Point& r)  {} // call by reference : 복사본 객체 생성안됨.

int main()
{
	Point p;
	f1(p);
	f2(p);
}