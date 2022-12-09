#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 0,y;

	while (1) {
		x = 0;
		printf("請輸入介於 10 到 50000 的數值: ");
		scanf("%d", &y);
		if (!y) break;
		for (int i = 0;i < y+1;i++)		x = x + i;
		printf("1+2+.....+%5d = %12d\n", y,x);
	}

	system("pause");
	return(0);
}
