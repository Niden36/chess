#include <iostream>
#include <iomanip>
#include <string>
#include "move.h"
using namespace std;

void move(char n, int m, char j, int k, int t[10][10])
{
	int temp;
	temp = t[j][k];
	t[j][k] = t[n][m];
	t[n][m] = temp;
}