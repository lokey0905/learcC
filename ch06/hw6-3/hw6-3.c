#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int A[10] = { 0 }; /*�]�w�}�C����l��*/
	int i, j, min, t;
	srand((unsigned)time(NULL));
	printf("�洫�e ");
	for (j = 0; j < 10; j++) {
		A[j] = rand() % 1000;
		printf("%4d", A[j]);
	}
	//printf("\n\n");
	printf("\n�洫�� ");
	for (i = 0; i < 9; i++) {
		min = i; /*���]�ثe�̤p�ƬOA[min] */
		for (j = i + 1; j < 10; j++)
			if (A[min] > A[j]) min = j; // �O�U�̤p�ƪ����ޭ�
		//printf("i=%d,j=%d,min=%d", i, j, min);
		//for (j = 0; j < 6; j++) printf("%4d", A[j]);
		t = A[min]; A[min] = A[i]; A[i] = t;  // ��ƥ洫
		//for (j = 0; j < 10; j++) printf("%4d", A[j]);
		//printf("\n");
	}
	for (j = 0; j < 10; j++) printf("%4d", A[j]);
	system("pause"); return(0);
}
