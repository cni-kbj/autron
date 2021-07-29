#include <iostream>
#include <map>
#include <string>
#include <list>

int main()
{
	std::map<std::string, std::string> m;
	
	// map : Ű������ ����Ÿ ���� - STL ���� ����θ� ���
	
	// ������ �迭ó�� ����ϸ� �Ǵµ�, index�� ������ �ƴ� "Ű���� Ÿ��"
	m["mon"] = "������";
	m["sun"] = "�Ͽ���";
	m["wed"] = "������"; // �ᱹ "���� ����" �Դϴ�.
						// �׷��� "map" �� "dictionary" ��� �θ��ϴ�.

	std::cout << m["mon"] << std::endl;

	//-------------
	// data�� �ٸ� �ڷᱸ���� �������� Ȱ�뵵�� �����ϴ�

	std::map< std::string,  std::list<std::string> > m2;

	m2["ȫ�浿"].push_back("��ȭ1");
	m2["ȫ�浿"].push_back("��ȭ2");
	m2["ȫ�浿"].push_back("��ȭ3");

	for (auto e : m2["ȫ�浿"]) // m2["ȫ�浿"] �� data �̹Ƿ� list �Դϴ�
		std::cout << e << std::endl;
}





