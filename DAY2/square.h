//square.h
#pragma once

// extern "C" : C++ �����Ϸ�����
//				�ش� �Լ��� C���� �������
//				�ִٰ� �˸��� ��
// extern "C" int square(int a);

#ifdef __cplusplus
extern "C" {
#endif

	int square(int a);

#ifdef __cplusplus
}
#endif

// �Լ��� ���� C/C++���� ��� ����ϰ� �ͽ��ϴ�.
// 1. �Լ� ��ü�� .c �� �ؾ� �մϴ�. 
//    => �׷��� name mangling �� ����, C���� ��밡���մϴ�.

// 2. ��� ������ ��ó�� ������ C/C++ ���� ��� ������ ���� �ֽ��ϴ�.
//    "��� ����� ����� �ٽ�" �Դϴ�.