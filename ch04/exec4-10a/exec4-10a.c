#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char x;
	printf("請輸入一個字元, 男生請按(M或m), 女生請按(F或f):");
	scanf("%c", &x);

	if (x=='M'||x=='m') printf("您是男生\n");
	else printf("您是女生\n");
	printf("結束程式\n");
	system("pause");
	return(0);
}
