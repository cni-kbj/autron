// 참조반환.cpp
class Point
{
	int x, y;
};

Point pt; // 전역변수

Point f1() // return by value : pt가 아닌 pt의 복사본을 반환하게 됩니다.
{
	return pt;
}
Point& f2() // return by reference : 리턴용 복사본을 만들지 말라는 의미
{
	return pt;
}

Point& f3()
{
	Point temp; // 지역변수 입니다.
	return temp;// bug... 절대 지역변수는 참조 반환하면 안됨니다.
				// 위 f2 코드는 전역변수 이므로 참조 반환을 하는 것입니다.
				// 지역변수는 만드시 값 타입으로 반환해야 합니다.
}


int main()
{
	f1();
	f2();
}