#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int coin;
	printf("請輸入要兌換的金額:　");
	scanf("%d", &coin);
	printf("%8s50 圓 %2d 個\n", "可兌換: ", coin / 50);
	printf("%8s10 圓 %2d 個\n", "", coin % 50/10);
	printf("%8s 5 圓 %2d 個\n", "", coin % 10/5);
	printf("%8s 1 圓 %2d 個\n", "", coin %5);
	system("pause");
	return 0;
}