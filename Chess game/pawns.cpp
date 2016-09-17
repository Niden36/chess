#include <iostream>
using namespace std;

void whitepawn(int n, int m, int moves[10][10])
{
	int x1, x2, x3, y1;
	x1 = n;
	y1 = m - 1;
	x2 = x1 - 1;
	x3 = x1 + 1;
	if (moves[x1][y1] == 0)
		moves[x1][y1] = 1;
	if (moves[x2][y1] >= 66 && moves[x2][y1] <= 83)
		moves[x2][y1] = 2;
	if (moves[x3][y1] >= 66 && moves[x3][y1] <= 83)
		moves[x3][y1] = 2;
	if (m == 6)
		y1--;
	if (moves[x1][y1] == 0)
		moves[x1][y1] = 1;
}
void blackpawn(int n, int m, int moves[10][10])
{
	int x1, x2, x3, y1;
	x1 = n;
	y1 = m + 1;
	x2 = x1 - 1;
	x3 = x1 + 1;
	if (moves[x1][y1] == 0)
		moves[x1][y1] = 1;
	if (moves[x2][y1] >= 98 && moves[x2][y1] <= 115)
		moves[x2][y1] = 2;
	if (moves[x3][y1] >= 98 && moves[x3][y1] <= 115)
		moves[x3][y1] = 2;
	if (m == 1)
		y1++;
	if (moves[x1][y1] == 0)
		moves[x1][y1] = 1;
}