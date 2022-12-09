#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=1,y=1;
	while (1)
	{
		printf("從1累加到%3d=%3d\n",y,x);
		x = x + 1+y;
		y++;
		if (x > 150) break;
	}
	printf("從1累加到%3d=%3d\n", y, x);

	printf("必須由1開始，至少逐一累加到%3d，才會大於150\n", y);

	system("pause");
	return(0);
}
