#include <iostream>
#include "kings.h"
using namespace std;

void king(int n, int m, int moves[10][10])
{
	int y1, y2, y3, x1, x2, x3;
	y1 = m - 1;
	y2 = m;
	y3 = m + 1;
	x1 = n - 1;
	x2 = n;
	x3 = n + 1;
	while (1)                                                             //1
	{
		if (x1 >= 2 && y1 >= 0)
		{
			if (moves[x1][y1] == 0)
			{
				moves[x1][y1] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					moves[x1][y1] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					moves[x1][y1] = 2;
				break;
			}
		}
		break;
	}

	while (1)                                                             //2
	{
		if (y1 >= 0)
		{
			if (moves[x2][y1] == 0)
			{
				moves[x2][y1] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x2][y1] >= 98 && 115 >= moves[x2][y1])
					break;
				if (moves[x2][y1] >= 66 && 83 >= moves[x2][y1])
					moves[x2][y1] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x2][y1] >= 66 && 83 >= moves[x2][y1])
					break;
				if (moves[x2][y1] >= 98 && 115 >= moves[x2][y1])
					moves[x2][y1] = 2;
				break;
			}

		}
		break;
	}
	while (1)                                                             //3
	{
		if (x3 <= 9 && y1 >= 0)
		{
			if (moves[x3][y1] == 0)
			{
				moves[x3][y1] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x3][y1] >= 98 && 115 >= moves[x3][y1])
					break;
				if (moves[x3][y1] >= 66 && 83 >= moves[x3][y1])
					moves[x3][y1] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x3][y1] >= 66 && 83 >= moves[x3][y1])
					break;
				if (moves[x3][y1] >= 98 && 115 >= moves[x3][y1])
					moves[x3][y1] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //4
	{
		if (x3 <= 9)
		{
			if (moves[x3][y2] == 0)
			{
				moves[x3][y2] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x3][y2] >= 98 && 115 >= moves[x3][y2])
					break;
				if (moves[x3][y2] >= 66 && 83 >= moves[x3][y2])
					moves[x3][y2] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x3][y2] >= 66 && 83 >= moves[x3][y2])
					break;
				if (moves[x3][y2] >= 98 && 115 >= moves[x3][y2])
					moves[x3][y2] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //5
	{
		if (x3 <= 9 && y3 <= 7)
		{
			if (moves[x3][y3] == 0)
			{
				moves[x3][y3] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x3][y3] >= 98 && 115 >= moves[x3][y3])
					break;
				if (moves[x3][y3] >= 66 && 83 >= moves[x3][y3])
					moves[x3][y3] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x3][y3] >= 66 && 83 >= moves[x3][y3])
					break;
				if (moves[x3][y3] >= 98 && 115 >= moves[x3][y3])
					moves[x3][y3] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //6
	{
		if (y3 <= 7)
		{
			if (moves[x2][y3] == 0)
			{
				moves[x2][y3] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x2][y3] >= 98 && 115 >= moves[x2][y3])
					break;
				if (moves[x2][y3] >= 66 && 83 >= moves[x2][y3])
					moves[x2][y3] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x2][y3] >= 66 && 83 >= moves[x2][y3])
					break;
				if (moves[x2][y3] >= 98 && 115 >= moves[x2][y3])
					moves[x2][y3] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //7
	{
		if (x1 >= 2 && y3 <= 7)
		{
			if (moves[x1][y3] == 0)
			{
				moves[x1][y3] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x1][y3] >= 98 && 115 >= moves[x1][y3])
					break;
				if (moves[x1][y3] >= 66 && 83 >= moves[x1][y3])
					moves[x1][y3] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x1][y3] >= 66 && 83 >= moves[x1][y3])
					break;
				if (moves[x1][y3] >= 98 && 115 >= moves[x1][y3])
					moves[x1][y3] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //8
	{
		if (x1 >= 2)
		{
			if (moves[x1][y2] == 0)
			{
				moves[x1][y2] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x1][y2] >= 98 && 115 >= moves[x1][y2])
					break;
				if (moves[x1][y2] >= 66 && 83 >= moves[x1][y2])
					moves[x1][y2] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x1][y2] >= 66 && 83 >= moves[x1][y2])
					break;
				if (moves[x1][y2] >= 98 && 115 >= moves[x1][y2])
					moves[x1][y2] = 2;
				break;
			}
		}
		break;
	}
}