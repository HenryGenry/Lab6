// laba6.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double power(double a, int n) {
	return (!n) ? 1 : a*power(a, n-1);
}


int _tmain(int argc, _TCHAR* argv[])
{
	double num; int n;
	cin >> num >> n;
	cout << power(num, n) << endl;
	system("pause");
	return 0;
}

