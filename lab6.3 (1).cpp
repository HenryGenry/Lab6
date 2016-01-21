// lab6.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Search(int arr[], int n, int x)
{
	int tmp_num = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) tmp_num = i;
	}
	return tmp_num;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cin >> x;
	int arr[10] = { 4, 6, 10, 11, 55, 3, 2, 5, 7, 9 };
	cout << Search(arr, 10, x) << endl;
	system("pause");
	return 0;
}

