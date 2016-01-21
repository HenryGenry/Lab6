// task6.3.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

void Intersection()
{
	const int arSize = 1000;
	double a[arSize + 1], b[arSize + 1];
	int i = 0;
	int len1 = 0, len2 = 0;
	cin >> a[i];
	if (a[i] != -1)
	{
		len1++;
		while (a[i] != -1)
		{
			cin >> a[++i];
			len1++;
		}
	}
	i = 0;
	cin >> b[i];
	if (b[i] != -1)
	{
		len2++;
		while (b[i] != -1)
		{
			cin >> b[++i];
			len2++;
		}
	}
	int key = 0;
	int len = (len1 > len2) ? len1 : len2;
	for (int j = 0, i = 0; j < len, i < len;  i++, j++) { 
			if (a[i] == b[j])
			{
				if (a[i] == -1)
					continue;
				cout << b[j] << " ";
				key = 1;
			}
		}
	if (!key)
		cout << "empty";
}
int _tmain(int argc, _TCHAR* argv[])
{
	Intersection();
	system("pause");
	return 0;
}