#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix=0;
	while (ix != 5) {
		printf("�п�J�@�ӼƦr: ");
		scanf("%d", &ix);
		switch (ix) { /*�ھڿ�J�ӧP�_ */
		case 1: /* �ŤM */
			printf("�A�X���O�ŤM\n");
			break;
		case 2: /* ���Y */
			printf("�A�X���O���Y\n");
			break;
		case 3: /* �� */
			printf("�A�X���O��\n");
			break;
		case 5: /* �� */
			printf("�C������\n");
			break;
		default:
			printf("��J���~\n");
		}
	}
	system("pause"); return 0;
}
