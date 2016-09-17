
#include <iostream>
#include <iomanip>
#include <string>
#include "check.h"
#include "pawns.h"
#include "bishops.h"
#include "rooks.h"
#include "springers.h"
#include "queens.h"
#include "kings.h"

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
#define white_king 107	
#define black_king 75


int check(char n, int m, char j, int k, int t[10][10]) // function checking the available spaces for movment of a specific piece
{
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
		bishop(n, m, moves);
		break;
	case black_rook:      // rooks
	case white_rook:
		rook(n, m, moves);
		break;
	case black_springer: // springers/knights
	case white_springer:
		springer(n, m, moves);
		break;
	case black_queen:      // queen 
	case white_queen:
		queen(n, m, moves);
		break;
	case black_king:
	case white_king:
		king(n, m, moves);
        break;
	default:
		break;
	}
	return moves[j][k];

}