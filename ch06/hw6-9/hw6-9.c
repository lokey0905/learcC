#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a1[3][3] = { 0 };
	int a2[3][3] = { 0 };
	int t[3][3] = { 0 };
	for (int i = 0;i < 3;i++) {
		scanf("%d %d %d", &a1[i][0], &a1[i][1], &a1[i][2]);
	}
	for (int i = 0;i < 3;i++) {
		scanf("%d %d %d", &a2[i][0], &a2[i][1], &a2[i][2]);
	}
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 3;k++) {
			t[i][k] = a1[i][k] + a2[i][k];
			printf("%d ", t[i][k]);
		}
		printf("\n");
	}
	system("pause"); return(0);
}
