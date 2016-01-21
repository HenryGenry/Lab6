// task6.3.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template< class T >
void InsertionSort(T* a, int size)
{
	T tmp;
	for (int i = 1, j; i < size; ++i) 
	{
		tmp = a[i];
		for (j = i - 1; j >= 0 && a[j] > tmp; --j) 
			a[j + 1] = a[j];    
		a[j + 1] = tmp; 
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[5] = { 1, 3, 5, 2, 1 };
	InsertionSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

