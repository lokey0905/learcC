#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;// �s��Ū�����r��
	FILE *pfile;// �ŧi���V�ɮת����c����
	if ((pfile = fopen("story.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("story.txt �ɮ׵L�k�}��\n"); system("pause"); return(0);
	}
/*
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
		ch = fgetc(pfile);	// Ū���@�Ӧr��
		putchar(ch);		// ��XŪ�����r��
	}
*/
	fclose(pfile); // �����ɮ�
	printf("\n");
	system("pause"); return(0);
}
