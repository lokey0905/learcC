#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int ix;
	printf("請輸入一個十進位數:");
	scanf("%d", &ix);
	printf("10進位        ");
	printf("8 進位        ");
	printf("16進位        \n");
	printf("------------------------------------------\n");
	printf("%-14d%-#14o%#-14x\n", ix, ix, ix);
	system("pause");
	return(0);
}