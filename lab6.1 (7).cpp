// task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int reverse(int n) {
	int new_num = 0; int gg = 1;
	while (n != 0) {
		new_num *= 10;
		new_num += n % 10;
		n /= 10;
	}
	return new_num;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	cout << reverse(n) << endl;
	system("pause");
	return 0;
}

