// lab6.1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int min2(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
		return b;
}

int min(int a, int b, int c, int d)
{
	return min2(min2(a, b), min2(c, d));
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min(a, b, c, d) << endl;
	system("pause");
	return 0;
}

