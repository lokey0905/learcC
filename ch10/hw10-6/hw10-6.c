#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE* pfile;
	char a[3], b[3], c[80],d[3], e[3], f[3],g[20];
	if ((pfile = fopen("message.txt", "r+")) == NULL) {
		printf("message.txt �ɮ׵L�k�}��");
		system("pause"); return(0);
	} // �}�ҧ�s���ɮ�
	while (!feof(pfile)) { // ����ɮת����e
		fgets(c, 80, pfile); printf("%s", c);
	}
	rewind(pfile); //Ū�g�Y�^���ɮ��Y
	//printf("\n��J��f���:");
	/*gets(cDate);/*
	if (strlen(cDate) == 1) { //����u���@�Ӧr��
		cDate[2] = '\0'; cDate[1] = cDate[0]; cDate[0] = ' ';// �e���ɤ@�Ӫť�
	}*/
	printf("\n��J�q��̩m��:");
	gets(a);
	printf("\n�k1�k2:");
	gets(b);
	printf("\n�q��H��:");
	gets(d);
	printf("\n������F�ɶ�:");
	gets(e);
	printf("\n�i�����Ѽ�:");
	gets(f);
	printf("\n�q��:");
	gets(g);
	// �NŪ�g�Y���V�������m,����O���Bytes
	fseek(pfile, 0, SEEK_SET);
	fputs(a, pfile);
	fseek(pfile, 2, SEEK_SET);
	fputs(b=="1" ? "����" : "�k�h", pfile);
	fseek(pfile, 23, SEEK_SET);
	fputs(d, pfile);
	fseek(pfile, 45, SEEK_SET);
	fputs(e, pfile);
	fseek(pfile, 79, SEEK_SET);
	fputs(f, pfile);
	fseek(pfile, 98, SEEK_SET);
	fputs(g, pfile);
	rewind(pfile); //Ū�g�Y�^���ɮ��Y
	while (!feof(pfile)) { // ����ɮת����e
		fgets(c, 80, pfile); printf("%s", c);
	}
	printf("\n");
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}
