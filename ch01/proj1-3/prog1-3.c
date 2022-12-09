#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define NUM_PER_LINE 6

int main(void)
{
	int i, j, halfi;
	int flag;
	int num = 0;
	for (i = 2; i <= 100; i++)
	{
		flag = 1; halfi = i / 2;
		for (j = 2; j <= halfi; j++)
		{
			if (i % j == 0)
			{
				flag = 0; break;
			}
		}
		if (flag)
		{
			printf("%3d ", i);
			num++;
			if (num % NUM_PER_LINE == 0)  printf("\n");
		}
	}
	system("pause");
	return 0;
}