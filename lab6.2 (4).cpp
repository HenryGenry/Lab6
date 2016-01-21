// taask4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n; 
	cout << fib(n) << endl;
	system("pause");
	return 0;
}

