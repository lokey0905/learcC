#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	char ch;	  // �s��Ū�����r��
	int iNum = 0;  // �p��^��r�����Ӽ�
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("..//prog10-3//story.txt �ɮ׵L�k�}��"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
		ch = fgetc(pfile);	// Ū���@�Ӧr��
		putchar(ch);		// ��XŪ�����r��
		//if (isalpha(ch)) iNum++; //�p�G�O�^��r�� iNum �N�[1
		switch (ch) {
		case 'a':case 'A':
			a++; break;

		case 'e':case 'E':
			e++; break;

		case 'i':case 'I':
			i++; break;

		case 'o':case 'O':
			o++; break;

		case 'u':case 'U':
			u++; break;

		}
	}
	//printf("\n\nstory.txt �@�]�t%3d �ӭ^��r��\n", iNum);
	printf("\n\n");
	printf("�r��a�@�X�{%d��\n", a);
	printf("�r��e�@�X�{%d��\n", e);
	printf("�r��i�@�X�{%d��\n", i);
	printf("�r��o�@�X�{%d��\n", o);
	printf("�r��u�@�X�{%d��\n", u);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}
