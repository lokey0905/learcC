#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = { 23,31,3,19,54,12 }; /*�]�w�}�C����l��*/
	int i, j, min, t;
	//for (j = 0; j < 6; j++) printf("%4d", A[j]);
	//printf("\n\n");
	for (i = 0; i < 5; i++) {
		min = i; /*���]�ثe�̤p�ƬOA[min] */
		for (j = i + 1; j < 6; j++)
			if (A[min] <  A[j]) min = j; // �O�U�̤p�ƪ����ޭ�
		//printf("i=%d,j=%d,min=%d", i, j, min);
		//for (j = 0; j < 6; j++) printf("%4d", A[j]);
		t = A[min]; A[min] = A[i]; A[i] = t;  // ��ƥ洫
		for (j = 0; j < 6; j++) printf("%4d", A[j]);
		printf("\n");
	}
	system("pause"); return(0);
}