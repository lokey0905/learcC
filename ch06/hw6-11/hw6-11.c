#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s[5][2] = { 0 }, t[5][2] = {0}, temp[2];
	for (int i = 0;i < 5;i++) {
		for (int k = 0;k < 2;k++) {
			printf("��J%d���P�Ǫ�%s���Z:", i + 1, !k?"���":"�ƾ�");
			scanf("%d", &s[i][k]);
			t[i][0] = s[i][0] + s[i][1];
			t[i][1] = i + 1;
		}
		
	}
	for (int i = 0;i < 5;i++) {
		for (int k = i + 1;k < 5;k++) {
			if (t[k][0] > t[i][0]) {
				temp[0] = t[i][0];
				temp[1] = t[i][1];
				t[i][0] = t[k][0];
				t[i][1] = t[k][1];
				t[k][0] = temp[0];
				t[k][1] = temp[1];
			}
		}
	}
	printf("�s�� ��� �ƾ� �`��\n");
	for (int i = 0;i < 5;i++) {
		printf("%4d %4d %4d %4d\n", t[i][1], s[t[i][1]-1][0], s[t[i][1]-1][1], t[i][0]);
	}
	system("pause"); return(0);
}
