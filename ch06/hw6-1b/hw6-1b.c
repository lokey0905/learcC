#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iTotal = 0;	/* 設定總和為 0 */
	for (int i = 1;i <= 1000;i++) if (!(i % 2)) iTotal = iTotal + i;
	printf("1到1000中所有2的倍數的和=%d\n", iTotal);
	iTotal = 0;
	for (int i = 1;i <= 1000;i++) if (!(i % 3)) iTotal = iTotal + i;
	printf("1到1000中所有3的倍數的和=%d\n", iTotal);
	iTotal = 0;
	for (int i = 1;i <= 1000;i++) if (!(i % 5)) iTotal = iTotal + i;
	printf("1到1000中所有5的倍數的和=%d\n", iTotal);
	system("pause"); return(0);
}
