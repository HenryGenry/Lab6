// task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std; 
//template <class T>
void SelectionSort(int* arr, int size)//(T* arr, int size)//(int* arr, int size)
{
	//T tmp;
	int tmp;
	for (int i = 0; i < size; ++i)
	{
		int pos = i;
		tmp = arr[i];
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[j] < tmp)
			{
				pos = j;
				tmp = arr[j];
			}
		}
		arr[pos] = arr[i];
		arr[i] = tmp;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int arr[5] = { 1, 3, 5, 2, 1 };
	SelectionSort(arr, 5);
	for (int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

