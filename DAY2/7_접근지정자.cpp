// 4_접근지정자    74page ~
// 객체의 상태를 나타내는 데이타는 private 놓고..
// setter/getter를 통해서 접근하는 것이 안전하다.
struct Bike
{
private:
	int gear;

public:
	void set_gear(int g)
	{
		// 인자값의 유효성을 확인한후 사용한다.
		if (g <= 1) return;

		gear = g;
	}
	int get_gear() { return gear; }
};
int main()
{
	Bike b;
//	b.gear = 10;  // ok..
//	b.gear = -10; // 잘못된 사용으로 현실세계에 존재 할수 없는 객체가 탄생했다.
				  // 이런 실수는 막아야 한다.
	b.set_gear(-10); // 잘못된 값을 전달했지만, 객체의 상태에는 변화가 없다.

}
