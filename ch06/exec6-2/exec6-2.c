#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, n;
	int iTotal = 0;	/* 設定總和為 0 */
	int iStatus;	/* 是否輸入數字 */
	char ch;
	printf("輸入一個大於 1 的數: ");
	iStatus = scanf("%d", &n);
	while (n <= 1 || iStatus == 0) {
		printf("輸入一個大於 1 的數: ");
		iStatus = scanf("%d", &n);
		//printf("iStatus:%d\n", iStatus);
		//ch = getchar();
		fflush(stdin); /* 清除輸入緩衝區的內容 */
	} 
	i = 1; /* 負責 1+2+...+n 的遞增值 */
	while (i <= n)
	{
		iTotal += i; /* 加總 */
		i = i + 1;
	} 
	printf("1+...+%d = %d \n", n, iTotal);
	system("pause"); return(0);
}
