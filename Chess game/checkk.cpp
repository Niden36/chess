#include <iostream>
#include <iomanip>
#include <string>
#include "checkk.h"
using namespace std;

int checkk(char c, char n, int m, int t[10][10])
{

	char x1, x2, x3, x4;
	int y1, y2, y3, y4;
	int moves[10][10];
	//copies array t 
	for (int yy = 0; yy <= 9; yy++)
	{
		for (int xx = 0; xx <= 9; xx++)
		{
			if (t[xx][yy] == 42)
				moves[xx][yy] = 0;
			else
				moves[xx][yy] = t[xx][yy];
		}
	}


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
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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

	y1 = m;   // up 
	x1 = n;
	y1 = y1 - 1;
	while (y1 >= 0 && x1 >= 2)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
	}
	y1 = m;   // right
	x1 = n;
	x1 = x1 + 1;
	while (y1 >= 0 && x1 <= 9)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
		x1 = x1 + 1;
	}
	y1 = m;   // down
	x1 = n;
	y1 = y1 + 1;
	while (y1 <= 7 && x1 <= 9)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
	}
	y1 = m;  //  left
	x1 = n;
	x1 = x1 - 1;
	while (y1 <= 7 && x1 >= 2)
	{

		if (moves[x1][y1] == 0)
			moves[x1][y1] = 1;
		else
		{
			if (moves[n][m] == 75)
			{
				if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
					break;
				if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
				{
					moves[x1][y1] = 2;
					break;
				}
			}
			if (moves[n][m] == 107)
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
		x1 = x1 - 1;
	}

	y1 = m - 2;
	y2 = m - 1;
	y3 = m + 1;
	y4 = m + 2;
	x1 = n - 2;
	x2 = n - 1;
	x3 = n + 1;
	x4 = n + 2;
	while (1)                                                             //1
	{
		if (x1 >= 2 && y2 >= 0)
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

	while (1)                                                             //2
	{
		if (x2 >= 2 && y1 >= 0)
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
		if (x4 <= 9 && y2 >= 0)
		{
			if (moves[x4][y2] == 0)
			{
				moves[x4][y2] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x4][y2] >= 98 && 115 >= moves[x4][y2])
					break;
				if (moves[x4][y2] >= 66 && 83 >= moves[x4][y2])
					moves[x4][y2] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x4][y2] >= 66 && 83 >= moves[x4][y2])
					break;
				if (moves[x4][y2] >= 98 && 115 >= moves[x4][y2])
					moves[x4][y2] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //5
	{
		if (x4 <= 9 && y3 <= 7)
		{
			if (moves[x4][y3] == 0)
			{
				moves[x4][y3] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x4][y3] >= 98 && 115 >= moves[x4][y3])
					break;
				if (moves[x4][y3] >= 66 && 83 >= moves[x4][y3])
					moves[x4][y3] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x4][y3] >= 66 && 83 >= moves[x4][y3])
					break;
				if (moves[x4][y3] >= 98 && 115 >= moves[x4][y3])
					moves[x4][y3] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //6
	{
		if (x3 <= 9 && y4 <= 7)
		{
			if (moves[x3][y4] == 0)
			{
				moves[x3][y4] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x3][y4] >= 98 && 115 >= moves[x3][y4])
					break;
				if (moves[x3][y4] >= 66 && 83 >= moves[x3][y4])
					moves[x3][y4] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x3][y4] >= 66 && 83 >= moves[x3][y4])
					break;
				if (moves[x3][y4] >= 98 && 115 >= moves[x3][y4])
					moves[x3][y4] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //7
	{
		if (x2 >= 2 && y4 <= 7)
		{
			if (moves[x2][y4] == 0)
			{
				moves[x2][y4] = 1;
				break;
			}
			if (moves[n][m] == 107)
			{
				if (moves[x2][y4] >= 98 && 115 >= moves[x2][y4])
					break;
				if (moves[x2][y4] >= 66 && 83 >= moves[x2][y4])
					moves[x2][y4] = 2;
				break;
			}
			if (moves[n][m] == 75)
			{
				if (moves[x2][y4] >= 66 && 83 >= moves[x2][y4])
					break;
				if (moves[x2][y4] >= 98 && 115 >= moves[x2][y4])
					moves[x2][y4] = 2;
				break;
			}
		}
		break;
	}
	while (1)                                                             //8
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

	for (int q = 0; q <= 7; q++)
	{
		for (int p = 2; p <= 9; p++)
		{
			if (moves[p][q] == 2)
				return 0;
		}
	}
	return 1;

}
