#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int coin;
	while (1) {
		printf("�п�J�n�I�������B:�@");
		scanf("%d", &coin);
		if (coin < 50) {
			printf("�z��J�����B�p��50�A�{���������\n");
			break;
		}
		printf("%8s50 �� %2d ��\n", "�i�I��: ", coin / 50);
		printf("%8s10 �� %2d ��\n", "", coin % 50 / 10);
		printf("%8s 5 �� %2d ��\n", "", coin % 10 / 5);
		printf("%8s 1 �� %2d ��\n", "", coin % 5);
	}
	system("pause");
	return 0;
}