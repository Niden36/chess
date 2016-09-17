#include <iostream>
#include <iomanip>
#include <string>
#include "attack.h"
using namespace std;

void attack(char n, int m, char j, int k, int t[10][10])
{
	t[j][k] = t[n][m];
	t[n][m] = 42;
}