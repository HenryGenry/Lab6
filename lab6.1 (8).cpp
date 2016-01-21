// task8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

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

int IsPalindrom(int num) {
	int count = 0;
	for (int i = 1; i < num; i++) {
		if (reverse(i) == i) count++;
	}
	return count;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int K;
	cin >> K;
	cout << IsPalindrom(K) << endl;
	system("pause");
	return 0;
}

