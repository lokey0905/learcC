#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // 函式原型宣告

void sun(int);

int main(void)
{
	int y;
	printf("輸入一個正整數:");
	scanf("%d", &y);
	sun(y);

	system("pause"); return (0);
}

void sun(int x) {
	int total = 0;
	for (int i = 1;i <= x;i++)	total += i;
	printf("總和:%d\n", total);
}