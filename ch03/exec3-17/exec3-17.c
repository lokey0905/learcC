#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	char ch;
	printf("請輸入一個整數: ");
	scanf("%d", &num);
	printf("請輸入一個字元: ");
	scanf("%c", &ch);
	printf("num=%d,ascii of ch=%d\n", num, ch);
	system("pause"); return(0);
}

