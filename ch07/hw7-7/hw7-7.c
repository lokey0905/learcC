#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int x[8][4];

void input(int x[8][4]) {
	int a;
	while (1) {
		printf("1.��J�y�� 2.��J��妨�Z 3.��J�ƾǦ��Z 4.����\n");
		scanf("%d", &a);
		if (a == 1) {
			printf("\n��J8�Ӯy�� �Ů���}\n");
			for (int i = 0;i < 8;i++)	scanf(" %d", &x[i][0]);
		}
		if (a == 2) {
			printf("\n��J8�Ӱ�妨�Z �Ů���}\n");
			for (int i = 0;i < 8;i++)	scanf("%d", &x[i][1]);
		}
		if (a == 3) {
			printf("\n��J8�ӼƾǦ��Z �Ů���}\n");
			for (int i = 0;i < 8;i++)	scanf("%d", &x[i][2]);
		}
		if (a == 4)	break;
	}
	printf("\n�^��D���\n");
}

int main(void)
{
	int a;
	int x[8][4];
	while (1) {
		printf("1.��J���Z 2.��X���Z 3.����\n");
		scanf("%d", &a);
		if (a == 1) input(x);
		if (a == 2) {
			printf("\n�y��:��妨�Z:�ƾǦ��Z:�`���Z\n");
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

	printf("�{������\n");

	system("pause"); return (0);
}
