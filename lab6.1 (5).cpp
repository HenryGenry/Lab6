// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	cout << isPrime(n) << endl;
	system("pause");
	return 0;
}

