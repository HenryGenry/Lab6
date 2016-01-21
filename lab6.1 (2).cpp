// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double power(double a, int n)
{
	double res = a;
	for (int i = 1; i < n; i++) {
		res *= a;
	}
	return res;
}
int _tmain(int argc, _TCHAR* argv[])
{
	double a; 
	int n;
	cin >> a >> n;
	cout << power(a, n) << endl;
	system("pause");
	return 0;
}

