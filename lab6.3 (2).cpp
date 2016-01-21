
// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void set(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

int CountMax(int arr[], int n, int max)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max) count++;
	}
	return count;
}

int Max(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10];
	set(arr, 10);
	cout << CountMax(arr, 10, Max(arr, 10)) << endl;
	system("pause");
	return 0;
}

