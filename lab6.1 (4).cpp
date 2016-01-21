// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


bool election(bool x, bool y, bool z) {

	int count_true = 0, count_false = 0;
	if (x == true) count_true++;
	else count_false++;
	if (y == true) count_true++;
	else count_false++;
	if (z == true) count_true++;
	else count_false++;
	if (count_true > count_false) return true;
	else return false;

}

int main()
{
	bool x, y, z;
	cin >> x >> y >> z;
	cout << election(x, y, z) << endl;
	system("pause");
	return 0;
}

