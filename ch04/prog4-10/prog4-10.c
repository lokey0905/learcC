#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix;
	printf("請輸入一個數值:"); scanf("%d", &ix);
	if (ix % 2 == 1) printf("你輸入的是 %d 是奇數\n", ix);
	//if (ix % 2 == 0) printf("你輸入的是 %d 是偶數\n", ix);

	system("pause"); return(0);
}
