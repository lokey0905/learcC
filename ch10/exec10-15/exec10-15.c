#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* pfile;
	char cBuf[30];
	if ((pfile = fopen("story.txt", "r")) == NULL) {
		printf("story.txt 檔案無法開啟");
		system("pause"); return(0);
	} //開啟檔案
	
	printf("檔案起始位置: %2d\n", ftell(pfile));
	while (!feof(pfile)) {
		fscanf(pfile, "%s", cBuf); printf("讀取 %s", cBuf);
		printf("檔案目前位置: %2d\n", ftell(pfile));
	}
	
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}
