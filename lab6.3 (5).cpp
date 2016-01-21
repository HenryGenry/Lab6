// task6.3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int origin[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int A[10] = { 1, 2, 0, 4, 5, 1, 1, 1, 2, 2 };
	int qq[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 10; i++) {
		qq[A[i]]++;
	}
	for (int i = 0; i < 9; i++){
		cout << qq[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

