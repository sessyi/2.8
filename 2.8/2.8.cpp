// 2.8.cpp: определяет точку входа для консольного приложения.
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
		float znamenatel = 3 * i + 5; //Вычисление знаменателя
		float iter = 1 / znamenatel; //Вычисление значения в цикле
		sum = sum + iter; //Добавление в сумму
	}
	cout << "output sum is: " << sum << '\n';
	system("pause");
	return 0;
}

