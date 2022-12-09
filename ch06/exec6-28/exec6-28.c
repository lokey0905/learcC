#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, ifib[11],ch;
	do {
		printf("輸入一個大於1的整數(0離開)");
		scanf("%d",&ch);
		if (!ch) break;
		ifib[0] = 0; ifib[1] = 1; /* 設定起始計算所需要的數值 */
		for (i = 2; i < 11; i++)
			ifib[i] = ifib[i - 1] + ifib[i - 2]; /* 依照公式計算 */
		for (i = 1; i < ch + 1; i++) {
			if (ifib[i] > ch) break;
			printf("f%-2d = %2d\n", i, ifib[i]); /*輸出前10項 */
		}
	} while (1);
	system("pause"); return(0);
}
