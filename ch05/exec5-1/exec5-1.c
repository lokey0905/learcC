#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix,iy=0;
	printf("�п�J�@�Ӽƭ�:"); scanf("%d", &ix);
	if (ix % 2 == 0) {/* �l 0 ��ܸӼƬ����� */
		printf("�A��J���O����\n");
		iy = ix + 1;
		printf("�Ӱ���+1��O%d\n",iy);
	}
	else { /* ���O�l 0, ���N�O�l 1, ��ܸӼƬ��_�� */
		printf("�A��J���O�_��\n");
		iy = ix + 2;
		printf("�ө_��+2��O%d\n",iy);
	}
	system("pause"); return 0;
}
