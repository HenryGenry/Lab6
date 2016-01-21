// task6.3.6.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int origin[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int A[11] = { 1, 2, 3, 4, 5, 1, 1, 1, 2, 2, 0 };
	int qq[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	while(A[i] != 0) {
		qq[A[i]]++;
		i++;
	}
	for (int i = 0; i < 9; i++){
		cout << qq[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}