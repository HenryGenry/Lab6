// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void LastMax(int arr[], int n)
{
	int max = arr[0], count;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			count = i;
		}
	}
	cout << max << ' ' << count << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[7] = { 4, 5, 6, 7, 7, 7, 4 };
	LastMax(arr, 7);
	system("pause");
	return 0;
}

