#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=1,y=1;
	while (1)
	{
		printf("�q1�֥[��%3d=%3d\n",y,x);
		x = x + 1+y;
		y++;
		if (x > 150) break;
	}
	printf("�q1�֥[��%3d=%3d\n", y, x);

	printf("������1�}�l�A�ܤֳv�@�֥[��%3d�A�~�|�j��150\n", y);

	system("pause");
	return(0);
}
