#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"//Ϊroll_n_dice�ṩԭ�ͣ�Ϊroll_count �����ṩ����


int main()
{
	int dice, roll;
	int sides;
	int panbie;
	srand((unsigned int)time(0));//����ʱ��������������
	printf("������ÿ�������ӵ�����\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("�Ӽ��Σ�\n");
		if ((panbie = scanf("%d", &dice)) != 1 )
		{
			if (panbie == EOF)
				break;
			else
			{
				printf("��Ӧ������һ������\n");
				printf("�ڳ���һ��\n");
				while (getchar() != '\n')
					continue;
				printf("��Ҫ�ӵ����ӵ�����������С��0������ֹ�г�\n");
				continue;
			}
		}
		roll = roll_n_dice(dice,sides);
		printf("���ӳ���%d�� ��%d��%d������ӵõ���\n", roll, dice, sides);
		printf("��Ҫ�����������ӵ�������<0��ֹ�г̣�\n");
	}
	printf("��һ������%d������\n", roll_count);
	printf("����ˣ�\n");
	return 0;
}
