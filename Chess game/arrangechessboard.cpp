#include <iostream>
using namespace std;

void arrangechessboard(int chessboard[10][10])
{
	int y, x;
	//defines the outer rims of the chessboard
	for (y = 0; y <= 9; y++)
	{
		int a;
		a = 8 - y;
		chessboard[0][y] = a;
		chessboard[1][y] = 124;
	}

	for (x = 2; x <= 9; x++)
	{
		int a;
		a = x + 95;
		chessboard[x][8] = 45;
		chessboard[x][9] = a;
	}
	chessboard[0][8] = 45;
	chessboard[0][9] = 155;
	// lays out the chess pieces into their standard starting possitions and fills empty fields with *

	//black chesspieces
	chessboard[2][0] = 82;
	chessboard[9][0] = 82;
	chessboard[3][0] = 83;
	chessboard[8][0] = 83;
	chessboard[4][0] = 66;
	chessboard[7][0] = 66;
	chessboard[5][0] = 81;
	chessboard[6][0] = 75;
	//white chesspieces
	chessboard[2][7] = 114;
	chessboard[9][7] = 114;
	chessboard[3][7] = 115;
	chessboard[8][7] = 115;
	chessboard[4][7] = 98;
	chessboard[7][7] = 98;
	chessboard[5][7] = 113;
	chessboard[6][7] = 107;
	//pawns and empty spaces
	for (x = 2; x <= 9; x++)
	{
		chessboard[x][1] = 80;
		chessboard[x][6] = 112;
		// filling the empty spaces
		for (y = 2; y <= 5; y++)
		{
			chessboard[x][y] = 42;
		}
	}
}
