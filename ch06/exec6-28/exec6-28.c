#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, ifib[11],ch;
	do {
		printf("��J�@�Ӥj��1�����(0���})");
		scanf("%d",&ch);
		if (!ch) break;
		ifib[0] = 0; ifib[1] = 1; /* �]�w�_�l�p��һݭn���ƭ� */
		for (i = 2; i < 11; i++)
			ifib[i] = ifib[i - 1] + ifib[i - 2]; /* �̷Ӥ����p�� */
		for (i = 1; i < ch + 1; i++) {
			if (ifib[i] > ch) break;
			printf("f%-2d = %2d\n", i, ifib[i]); /*��X�e10�� */
		}
	} while (1);
	system("pause"); return(0);
}
