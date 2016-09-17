#include <iostream>
#include <iomanip>
#include <string>
#include "print.h"
using namespace std;

void printboard(int t[10][10])
{
	for (int y = 0; y <= 9; y++)  //program prints the chessboard 
	{
		for (int x = 0; x <= 9; x++)
		{
			if (x == 0 && (y <= 7 && y >= 0))
			{
				cout << setw(3);
				cout << t[x][y];

			}
			else
			{
				cout << setw(3);
				cout << (char)t[x][y];

			}
		}
		cout << endl;
	}
}