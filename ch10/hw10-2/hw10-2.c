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
	int sum[26] = { 0 };
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("..//prog10-3//story.txt �ɮ׵L�k�}��"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
		ch = fgetc(pfile);	// Ū���@�Ӧr��
		//putchar(ch);		// ��XŪ�����r��
		//if (isalpha(ch)) iNum++; //�p�G�O�^��r�� iNum �N�[1
		

		if (ch >= 'a') {
			sum[ch - 'a']++;
		}
		else sum[ch - 'A']++;
	}
	//printf("\n\nstory.txt �@�]�t%3d �ӭ^��r��\n", iNum);
	//printf("\n\n");
	for (int ii = 0;ii < 26;ii++) {
		printf("�r�� %c��%c �@�X�{%4d��\n",ii+'A', ii + 'a', sum[ii]);
	}
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}
