#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* pfile;
	char cBuf[30];
	if ((pfile = fopen("story.txt", "r")) == NULL) {
		printf("story.txt �ɮ׵L�k�}��");
		system("pause"); return(0);
	} //�}���ɮ�
	
	printf("�ɮװ_�l��m: %2d\n", ftell(pfile));
	while (!feof(pfile)) {
		fscanf(pfile, "%s", cBuf); printf("Ū�� %s", cBuf);
		printf("�ɮץثe��m: %2d\n", ftell(pfile));
	}
	
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}
