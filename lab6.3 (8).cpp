// task6.3.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template< class T >
void bubbleSort(T* arr, int size)
{
	T tmp;

	for (int i = 0; i < size - 1; ++i) 
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[5] = { 1, 3, 5, 2, 1 };
	bubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

