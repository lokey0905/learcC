#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s[3][4] = { 0 };
	printf("��J�ӫ~���P��q(1�F 2�n 3�� 4�_):\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 4;k++) {
			printf("��%d���b�a%d�Ϫ��P��q:", i + 1, k + 1);
			scanf("%d", &s[i][k]);
		}
	}
	for (int i = 0;i < 3;i++) {
		printf("��%d�����P��q���O�O:%2d%2d%2d%2d,�P���`�q:%d\n", i + 1, s[i][0], s[i][1], s[i][2], s[i][3], s[i][0] + s[i][1] + s[i][2] + s[i][3]);
	}
	for (int i = 0;i < 4;i++) {
		printf("��%d���`�P��q�ƶq:%d\n", i + 1, s[0][i]+s[1][i]+s[2][i]);
	}
	system("pause"); return(0);
}
