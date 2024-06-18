#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"//为roll_n_dice提供原型，为roll_count 变量提供声明


int main()
{
	int dice, roll;
	int sides;
	int panbie;
	srand((unsigned int)time(0));//利用时间戳生成随机种子
	printf("请输入每次扔骰子的面数\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("扔几次？\n");
		if ((panbie = scanf("%d", &dice)) != 1 )
		{
			if (panbie == EOF)
				break;
			else
			{
				printf("你应该输入一个整数\n");
				printf("在尝试一遍\n");
				while (getchar() != '\n')
					continue;
				printf("你要扔的骰子的面数？输入小于0的数终止行程\n");
				continue;
			}
		}
		roll = roll_n_dice(dice,sides);
		printf("你扔出了%d点 扔%d次%d面的骰子得到的\n", roll, dice, sides);
		printf("还要扔吗？输入骰子的面数（<0终止行程）\n");
	}
	printf("你一共扔了%d次骰子\n", roll_count);
	printf("真好运！\n");
	return 0;
}
