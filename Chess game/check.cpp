
#include <iostream>
#include <iomanip>
#include <string>
#include "check.h"
#include "pawns.h"

#define white_pawn 112
#define black_pawn 80
#define white_bishop 98
#define black_bishop 66
#define white_rook 114
#define black_rook 82
#define white_springer 115
#define black_springer 83
#define white_queen 113
#define black_queen 81
#define white_king 75	
#define black_king 117
#define checkwhite moves[x1][y1] >= 66 && 83 >= moves[x1][y1]

int check(char n, int m, char j, int k, int t[10][10]) // function checking the available spaces for movment of a specific piece
{
	char x1, x2, x3, x4;
	int y1, y2, y3, y4;
	int piece;
	int moves[10][10];
	//fills the moves array with 0
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

	piece = t[n][m];
	switch (piece)
	{
	case white_pawn:    
		whitepawn(n, m, moves);
		break;
	case black_pawn: 
		blackpawn(n, m, moves);
		break;
	case black_bishop:        
	case white_bishop:

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

		break;
	case black_rook:      // rooks
	case white_rook:

		y1 = m;   // up 
		x1 = n;
		y1 = y1 - 1;
		while (y1 >= 0 && x1 >= 2)
		{

			if (moves[x1][y1] == 0)
				moves[x1][y1] = 1;
			else
			{
				if (moves[n][m] == 82)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 114)
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
				if (moves[n][m] == 82)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 114)
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
				if (moves[n][m] == 82)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 114)
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
				if (moves[n][m] == 82)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 114)
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

		break;
	case black_springer: // springers/knights
	case white_springer:
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
				if (moves[n][m] == 115)
				{
					if (moves[x1][y2] >= 98 && 115 >= moves[x1][y2])
						break;
					if (moves[x1][y2] >= 66 && 83 >= moves[x1][y2])
						moves[x1][y2] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x2][y1] >= 98 && 115 >= moves[x2][y1])
						break;
					if (moves[x2][y1] >= 66 && 83 >= moves[x2][y1])
						moves[x2][y1] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x3][y1] >= 98 && 115 >= moves[x3][y1])
						break;
					if (moves[x3][y1] >= 66 && 83 >= moves[x3][y1])
						moves[x3][y1] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x4][y2] >= 98 && 115 >= moves[x4][y2])
						break;
					if (moves[x4][y2] >= 66 && 83 >= moves[x4][y2])
						moves[x4][y2] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x4][y3] >= 98 && 115 >= moves[x4][y3])
						break;
					if (moves[x4][y3] >= 66 && 83 >= moves[x4][y3])
						moves[x4][y3] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x3][y4] >= 98 && 115 >= moves[x3][y4])
						break;
					if (moves[x3][y4] >= 66 && 83 >= moves[x3][y4])
						moves[x3][y4] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x2][y4] >= 98 && 115 >= moves[x2][y4])
						break;
					if (moves[x2][y4] >= 66 && 83 >= moves[x2][y4])
						moves[x2][y4] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
				if (moves[n][m] == 115)
				{
					if (moves[x1][y3] >= 98 && 115 >= moves[x1][y3])
						break;
					if (moves[x1][y3] >= 66 && 83 >= moves[x1][y3])
						moves[x1][y3] = 2;
					break;
				}
				if (moves[n][m] == 83)
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
		break;
	case black_queen:      // queen 
	case white_queen:
		y1 = m;   // up and left
		x1 = n;
		y1 = x1 - 1;
		x1 = y1 - 1;
		while (y1 >= 0 && x1 >= 2)
		{

			if (moves[x1][y1] == 0)
				moves[x1][y1] = 1;
			else
			{
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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
				if (moves[n][m] == 81)
				{
					if (moves[x1][y1] >= 66 && 83 >= moves[x1][y1])
						break;
					if (moves[x1][y1] >= 98 && 115 >= moves[x1][y1])
					{
						moves[x1][y1] = 2;
						break;
					}
				}
				if (moves[n][m] == 113)
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

		break;
	case black_king:
	case white_king:
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


	default:
		break;
	}
	return moves[j][k];

}