#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a[3][3][4] = { 0 },t=0,min=100,max=0;
	srand((unsigned)time(NULL));
	printf("�Ĥ@��\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 4;k++) {
			a[0][i][k]=rand() % 100+1;
			printf("%d ", a[0][i][k]);
			if (min > a[0][i][k]) min = a[0][i][k];
			if (max < a[0][i][k]) max = a[0][i][k];
		}
		printf("\n");
	}
	printf("��2��\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 4;k++) {
			a[1][i][k] = rand() % 100+1;
			printf("%d ", a[1][i][k]);
			if (min > a[1][i][k]) min = a[1][i][k];
			if (max < a[1][i][k]) max = a[1][i][k];
		}
		printf("\n");
	}
	printf("��3��\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 4;k++) {
			a[2][i][k] = a[0][i][k]+ a[1][i][k];
			printf("%d ", a[2][i][k]);
			t += a[2][i][k];
			if (min > a[2][i][k]) min = a[2][i][k];
			if (max <  a[2][i][k]) max = a[2][i][k];
		}
		printf("\n");
	}
	printf("  �`�X�� = %4d\n",t);
	printf("�̤p�Ȭ� = %4d\n", min);
	printf("�̤j�Ȭ� = %4d\n", max);
	system("pause"); return(0);
}
