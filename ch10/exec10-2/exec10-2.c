#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE* pfile;
	pfile = fopen("..\\prog10-2\\story.txt", "a+");
	if (pfile == NULL) {
		printf("�ɮ׵L�k�}��"); return 0;
	}
	fprintf(pfile, "%s\n", "\nToday is good day");
	fclose(pfile);
	system("pause");
	return 0;
}