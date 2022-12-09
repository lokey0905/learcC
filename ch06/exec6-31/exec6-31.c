#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a1[2][3] = { 0 };
	int a2[2][3] = { 1 };
	int a3[2][3] = { 1,2,3,4 };
	int a4[2][3] = { {1},{2} };
	int a5[2][3] = { {1,3,5},{2,4} };
	int a6[2][3] = { 1,3,5,2,4,-1 };
	int i, j;
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 3;j++) {
			printf("a[%d][%d]=%d,", i, j, a1[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------------\n");
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 3;j++) {
			printf("a[%d][%d]=%d,", i, j, a2[i][j]);
		}
		printf("\n");
	}
	system("pause"); return(0);
}
