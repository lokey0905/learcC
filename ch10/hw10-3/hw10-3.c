#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	char ch;	  // �s��Ū�����r��
	int iNum = 0;  // �p��^��r�����Ӽ�
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	int sum[26] = { 0 };
	int ifd, ilen;/*
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("..//prog10-3//story.txt �ɮ׵L�k�}��"); system("pause"); return(0);
	}*/
	ifd = _open("..//prog10-3//story.txt", O_RDWR);
	if (ifd == -1) {
		printf("..//prog10-3//story.txt �ɮ׵L�k�}��"); system("pause"); return(0);
	}
	
	_lseek(ifd, 0, SEEK_SET);		 // Ū�g�Y�^���ɮ��Y

	while (!_eof(ifd)) {	// �P�_�O�_Ū���ɮק�
		_read(ifd, &ch, sizeof(char));
		if (ch >= 'a') {
			sum[ch - 'a']++;
		}
		else sum[ch - 'A']++;
	}
	
	for (int ii = 0;ii < 26;ii++) {
		printf("�r�� %c��%c �@�X�{%4d��\n", ii + 'A', ii + 'a', sum[ii]);
	}
	_close(ifd); // �����ɮ�
	system("pause"); return(0);
}
