#include <iostream>
#include <iomanip>
#include <string>
#include "print.h"
#include "move.h"
#include "attack.h"
#include "clearscreen.h"
#include "check.h"
#include "checkk.h"
#include "findk.h"
using namespace std;

	
int main()
{
	int chessboard[10][10];
	int backupboard[10][10];
	int chck = 1;
	char kingcolor;
	int counterw;
	int counterb;
	int ok;
	int x=0, y=0;
	char x1=0, x2=0, a1=0,a2=0;
	int y1=0, y2=0, b1=0,b2=0,wky=0,bky=0, wkx=0, bkx=0;
	char start=0;
	char sign=0;
	int Y=0;
	x1 = 0;


	
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
	for (y = 0; y <= 9; y++)  // creates a backup board 
	{
		for (x = 0; x <= 9; x++)
		{
			backupboard[x][y] = chessboard[x][y];
		}
	}
	cout << "Hello." << endl;
	cout << "This is a basic game of chess."<<endl;
	cout << "It supports game supports up to two players." << endl;
	cout << "You take turns moving your pieces." << endl;
	cout << "Player 1 starts the game of with his move" << endl;
	cout << "his pieces are located at the bottom of the chessboard" << endl;
	cout << "You move your pieces with by typing the coordinates " << endl;
	cout << "E.G    a2>a4 " <<endl;
	cout << "the first part (a2) stands for the coordinates of the piece you want to move"<< endl;
	cout << "whereas the other (a4) indicates where you would like your piece to be placed" << endl;
	cout << "please use only lower case letters and numbers from 1 to 8" << endl;
	cout << "You use the (>) to indicate movement" << endl;
	cout << "You can also use (<) to go back a step if you made a mistake." << endl;
	cout << "Enjoy" << endl;
	cout << "Would you like to start a new game" << endl; // game starts
	cout << "Type (Y/N) and press enter"<< endl;
	cin >> start;
	
	while (start == 89 || 121 )
	{
		clearscreen();
		if (x1 == 60)
		{
			for (y = 0; y <= 9; y++)
			{
				for (x = 0; x <= 9; x++)
				{
					chessboard[x][y] = backupboard[x][y];
				}
			}
			printboard(backupboard);
			x1 = 0;
		}
		else
		{
			printboard(chessboard);
			cout << "Player one's turn to move " << endl;

		}
		while (1)
		{
			cin >> x1;
			if (x1 == 60)
				break;
			cin >> y1;

			cin >> sign;
			cin >> x2;
			cin >> y2;
			a1 = x1 -95  ;
			b1 = 8 - y1 ;
			a2 = x2 - 95;
			b2 = 8 - y2;

			if (chessboard[a1][b1] >= 98 && chessboard[a1][b1] <= 115)
			{
				for (y = 0; y <= 9; y++)
				{
					for (x = 0; x <= 9; x++)
					{
						backupboard[x][y] = chessboard[x][y];
					}
				}
				if (sign == 62)
					Y = check(a1, b1, a2, b2, chessboard);
				kingcolor = 107;
				switch (Y)
				{
				case 0:
					cout << "you can not make that move" << endl;
					break;
				case 1:
					
					move(a1, b1, a2, b2, chessboard);
					findk(kingcolor, wkx, wky, chessboard);
					ok = checkk(kingcolor, wkx, wky, chessboard);
					if (ok == 1)
					{
						kingcolor =75;
						findk(kingcolor, bkx, bky, chessboard);
						ok = checkk(kingcolor, bkx, bky, chessboard);

						
							break;
						
					}
					else
					{
						for (y = 0; y <= 9; y++)
						{
							for (x = 0; x <= 9; x++)
							{
								chessboard[x][y] = backupboard[x][y];
							}
						}

						cout << "you can't make that move, your king is in danger" << endl;
						Y = 0;
						break;
					}
					
				case 2:
					attack(a1, b1, a2, b2, chessboard);
					findk(kingcolor, wkx, wky, chessboard);
					ok = checkk(kingcolor, wkx, wky, chessboard);
					if (ok == 1)
					{
						kingcolor = 75;
						findk(kingcolor, bkx, bky, chessboard);
						ok = checkk(kingcolor, bkx, bky, chessboard);

							break;
						
					}
					else
					{
						for (y = 0; y <= 9; y++)
						{
							for (x = 0; x <= 9; x++)
							{
								chessboard[x][y] = backupboard[x][y];
							}
						}
						
						cout << "you can't make that move, your king is danger" << endl;
						Y = 0;
						break;
					}
				default:
					cout << "can't do that" << endl;
					break;
				}
				if (Y== 1 || Y==2)
				break;
			}
			else
			{
				cout << "it is player one's turn to move " << endl;
			}

			
		}



		clearscreen();
		if (x1 == 60)
		{
			printboard(backupboard);
			for (y = 0; y <= 9; y++)
			{
				for (x = 0; x <= 9; x++)
				{
					chessboard[x][y] = backupboard[x][y];
				}
			}
			x1 = 0;
		}
		else
		{
			if (ok == 0)
			{
				cout << "check " << endl;

			}
			printboard(chessboard);


			cout << "Player two's turn to move " << endl;
		}
		while (1)
		{
			kingcolor = 75;

			
			cin >> x1;
			if (x1 == 60)
				break;
			cin >> y1;


			cin >> sign;
			cin >> x2;
			cin >> y2;
			a1 = x1 - 95;
			b1 = 8 - y1;
			a2 = x2 - 95;
			b2 = 8 - y2;

			if (chessboard[a1][b1] >= 66 && chessboard[a1][b1] <= 83)
			{
				for (y = 0; y <= 9; y++)
				{
					for (x = 0; x <= 9; x++)
					{
						backupboard[x][y] = chessboard[x][y];
					}
				}

				if (sign == 62)
					Y = check(a1, b1, a2, b2, chessboard);

				switch (Y)
				{
				case 0:
					cout << "you can not make that move" << endl;
					break;
				case 1:
					move(a1, b1, a2, b2, chessboard);
					findk(kingcolor, bkx, bky, chessboard);
					ok = checkk(kingcolor, bkx, bky, chessboard);

					if (ok == 1)
					{
						break;
					}
					else
					{
						for (y = 0; y <= 9; y++)
						{
							for (x = 0; x <= 9; x++)
							{
								chessboard[x][y] = backupboard[x][y];
							}
						}

							cout << "you can't make that move, your king is in danger" << endl;
							Y = 0;
							break;
						}
					
				case 2:
					attack(a1, b1, a2, b2, chessboard);
					findk(kingcolor, bkx, bky, chessboard);
					ok = checkk(kingcolor, bkx, bky, chessboard);
					if (ok == 1)
					{
						break;
					}
					else
					{
						for (y = 0; y <= 9; y++)
						{
							for (x = 0; x <= 9; x++)
							{
								chessboard[x][y] = backupboard[x][y];
							}
						}
					

							cout << "you can't make that move, your king is in danger" << endl;
							Y = 0;
							break;
						}
						
				default:
					cout << "can't do that" << endl;
					break;
				}
		   if (Y == 1 || Y == 2)
				break;
			}
			else
			
				cout << " it is player two's turn to move" << endl;
		}



		
		
	
	}

	return 0;


}


