#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int x[8][4];

void input(int x[8][4]) {
	int a;
	while (1) {
		printf("1.輸入座號 2.輸入國文成績 3.輸入數學成績 4.結束\n");
		scanf("%d", &a);
		if (a == 1) {
			printf("\n輸入8個座號 空格分開\n");
			for (int i = 0;i < 8;i++)	scanf(" %d", &x[i][0]);
		}
		if (a == 2) {
			printf("\n輸入8個國文成績 空格分開\n");
			for (int i = 0;i < 8;i++)	scanf("%d", &x[i][1]);
		}
		if (a == 3) {
			printf("\n輸入8個數學成績 空格分開\n");
			for (int i = 0;i < 8;i++)	scanf("%d", &x[i][2]);
		}
		if (a == 4)	break;
	}
	printf("\n回到主選單\n");
}

int main(void)
{
	int a;
	int x[8][4];
	while (1) {
		printf("1.輸入成績 2.輸出成績 3.結束\n");
		scanf("%d", &a);
		if (a == 1) input(x);
		if (a == 2) {
			printf("\n座號:國文成績:數學成績:總成績\n");
			for (int i = 0;i < 8;i++) x[i][3] = x[i][1] + x[i][2];
			for (int i = 0;i < 8;i++) {
				for (int k = 0;k < 4;k++) {
					printf("%6d", x[i][k]);
				}
				printf("\n");
			}
		}
		if (a == 3)	break;
	}

	printf("程式結束\n");

	system("pause"); return (0);
}
