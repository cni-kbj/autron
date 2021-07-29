class Bike
{
private:
	int gear;	// private �̹Ƿ� "��� �Լ�"�� ���� �����մϴ�.

public:
	void setGear(int g) { gear = g; } // ok..

	// friend �Լ� ���� : ����Լ��� �ƴ� �Ϲ� �Լ����� "private" ����� 
	//					�����ϰ� �ϴ� ����
	// �� ���� �ʿ��Ѱ��� ? : ��� ��� ���� �����ѵ�, ������ ���Ҷ��� �ֽ��ϴ�.
	//						==> Ư��, ������ ������ 
	// ĸ��ȭ�� ���� �ǹǷ� ������ �ʳ��� ? 
	//						==> ��, ���� ���� �޴� ����, C++���� ����
	//						    �ٸ� ��κ��� �� ���� ����.
	friend void FixBike(Bike& b);
};

void FixBike(Bike& b)
{
	b.gear = 10; // error. private ��� �Դϴ�.
				 // ok..   friend �� ��ϵǾ��ٸ�
}

int main()
{
	Bike b;
	b.gear = 10; // error. private ��� �Դϴ�.

	FixBike(b);
}
