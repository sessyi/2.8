// 2.8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float sum = 0;
	for (int i = 0; i <= 5; i++)
	{
		float znamenatel = 3 * i + 5; //���������� �����������
		float iter = 1 / znamenatel; //���������� �������� � �����
		sum = sum + iter; //���������� � �����
	}
	cout << "output sum is: " << sum << '\n';
	system("pause");
	return 0;
}

