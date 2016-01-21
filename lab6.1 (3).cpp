// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool xor(bool x, bool y)
{
	if (x == true && y != true)
		return true;
	else if (x != true && y == true)
		return true;
	else return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	bool x, y;
	cin >> x >> y;
	cout << xor(x, y) << endl;
	system("pause");
	return 0;
}

