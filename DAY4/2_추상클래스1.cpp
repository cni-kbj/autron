// 3_�߻�Ŭ���� - 168(216)page

// �߻� Ŭ����(Abstract class) : ���� ���� �Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� �����Ҽ� ����.
// �ǵ� : �Ļ�Ŭ���� �����ڵ鿡 "Ư����� �Լ�"�� �ݵ�� ������ �����ϴ� ��.
class Shape
{
public:
	virtual void Draw()  = 0; // ���� �����Լ�(pure virtual function )
							  // Ư¡ : �Լ� ������ ����, ����ڿ� "= 0" �� ǥ���ϴ°�
};
class Rect : public Shape
{
public:
	// �������� ���� �����Լ� Draw()�� �����θ� �������� ������ 
	// "Rect"�� �߻�Ŭ���� �Դϴ�.
	virtual void Draw() { std::cout << "Draw Rect" << std::endl; }
};

int main()
{
	Shape s; // error. �߻�Ŭ������ ��ü�� ����� �����ϴ�. 
	Rect  r; // Draw()�����θ� �����ϸ� ok.. �ƴϸ� error.
}


