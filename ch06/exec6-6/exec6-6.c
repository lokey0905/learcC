#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int iTotal = 0;	/* 設定總和為 0 */
	printf("輸入一個正整數n: ");
	scanf("%d", &n);
	for (int i = 1;i < n + 1;i++) {
		iTotal = iTotal + i * i;
		printf("%d^2",i);
		if(i!=n) printf(" + "); 
	}
	printf(" = %d\n",iTotal);
	system("pause"); return(0);
}
