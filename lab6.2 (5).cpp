// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int C(int m, int n)
{
	if (m == 0 || n == m)
		return 1;

	return C(m, n - 1) + C(m - 1, n - 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int m, n;
	cin >> m >> n;
	cout << C(m, n) << endl;
	system("pause");
	return 0;
}

