#include <stdio.h>
#include <stdlib.h>
#include "diceroll.h"//notice

int roll_count = 0;
static int rollem(int sides)
{
	int roll;
	roll = rand() % sides + 1;
	roll_count++;
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int n = 0;
	int total = 0;
	if (sides < 2)
	{
		printf("需要至少两面\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("至少扔一次\n");
		return -1;
	}
	for (n = 0;n < dice;n++)
		total += rollem(sides);
	return total;
}