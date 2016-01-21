// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int power(int a, int n)
{
	
	if (n % 2 == 0) return (!n) ? 1 : power(a * a, n / 2);
	else return (!n) ? 1 : a*power(a, n - 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a, n;
	cin >> a >> n;
	cout << power(a, n) << endl;
	system("pause");
	return 0;
}

