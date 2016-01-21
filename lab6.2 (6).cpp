// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void _move(int r, int b, int e)
{
	int c;

	if ((b == 1 && e == 2) || (b == 2 && e == 1)) c = 3;
	else
		if ((b == 1 && e == 3) || (b == 3 && e == 1)) c = 2;
		else
			if ((b == 2 && e == 3) || (b == 3 && e == 2)) c = 1;

	if (r > 1)
	{
		_move(r - 1, b, c);
		std::cout << b << " -> " << e << std::endl;
		_move(r - 1, c, e);
	}
	else
		std::cout << b << " -> " << e << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n, x, y;
	cin >> n >> x >> y;
	_move(n, x, y);
	system("pause");
	return 0;
}

