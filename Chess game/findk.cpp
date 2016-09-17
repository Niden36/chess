#include <iostream>
#include <iomanip>
#include <string>
#include "print.h"
using namespace std;

void  findk(int c, int &a, int &b, int t[10][10])
{
	int x, y;
	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (t[x][y] == c)
				break;

		}
		if (t[x][y] == c)
			break;
	}
	a = x;
	b = y;
}
