// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int SumOfDigits(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	cout << SumOfDigits(n) << endl;
	system("pause");
	return 0;
}

