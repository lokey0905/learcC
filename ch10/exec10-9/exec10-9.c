#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	char pname[20]="";
	char pid[12] = "";
	char num[5];
	//char cStr[20] = "long long ago";  // �s��g�X���r��
	int i, len;
	if ((pfile = fopen("product.txt", "w")) == NULL) {
		printf("�ɮ׵L�k�}��");
		system("pause"); return(0);
	}
	while (1) {
		printf("---����J��ƽЫ�q�A�����@��i�J��J\n");
		if ('q' == getch()) break;
		printf("��J���~�W��:"); scanf("%s", pname);fputs(pname, pfile);fputc(' ', pfile);
		printf("��J���~�s��:"); scanf("%s", pid);fputs(pid, pfile);fputc(' ', pfile);
		printf("��J���~�s�q:"); scanf("%s", num);fputs(num , pfile);fputc('\n', pfile);

	}

	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}
