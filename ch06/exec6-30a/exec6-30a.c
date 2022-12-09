#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s[3][4] = { 0 };
	printf("輸入商品的銷售量(1東 2南 3西 4北):\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 4;k++) {
			printf("第%d項在地%d區的銷售量:", i + 1, k + 1);
			scanf("%d", &s[i][k]);
		}
	}
	for (int i = 0;i < 3;i++) {
		printf("第%d項的銷售量分別是:%2d%2d%2d%2d,銷售總量:%d\n", i + 1, s[i][0], s[i][1], s[i][2], s[i][3], s[i][0] + s[i][1] + s[i][2] + s[i][3]);
	}
	for (int i = 0;i < 4;i++) {
		printf("第%d區總銷售量數量:%d\n", i + 1, s[0][i]+s[1][i]+s[2][i]);
	}
	system("pause"); return(0);
}
