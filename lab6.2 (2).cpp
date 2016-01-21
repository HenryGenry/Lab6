// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double power(double a, int n)
{
	if (n < 0) return 1.0 / power(a, -n);
	double result = 1;
	while (n)
	{
		if (n & 1) result *= a;
		a *= a;
		n >>= 1;
	}
	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	double a; int n;
	cin >> a >> n;
	cout << power(a, n) << endl;
	system("pause");
	return 0;
}

