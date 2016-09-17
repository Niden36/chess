#include <iostream>
#include "bishops.h"
using namespace std;

void bishop(int n, int m, int moves[10][10])
{
	int y1, x1;
	y1 = m;   // up and left
	x1 = n;
	y1 = y1 - 1;
	x1 = x1 - 1;
	while (y1 >= 0 && x1 >= 2)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 66)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 98)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}

			}
		}
		y1 = y1 - 1;
		x1 = x1 - 1;
	}
	y1 = m; // up and right
	x1 = n;
	y1 = y1 - 1;
	x1 = x1 + 1;
	while (y1 >= 0 && x1 <= 9)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 66)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 98)
			{
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}

			}
		}
		y1 = y1 - 1;
		x1 = x1 + 1;
	}
	y1 = m;   // down and right
	x1 = n;
	y1 = y1 + 1;
	x1 = x1 + 1;
	while (y1 <= 7 && x1 <= 9)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 66)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 98)
			{
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}

			}
		}
		y1 = y1 + 1;
		x1 = x1 + 1;
	}
	y1 = m;  // down and left
	x1 = n;
	y1 = y1 + 1;
	x1 = x1 - 1;
	while (y1 <= 7 && x1 >= 2)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 66)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 98)
			{
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}

			}
		}
		y1 = y1 + 1;
		x1 = x1 - 1;
	}
}