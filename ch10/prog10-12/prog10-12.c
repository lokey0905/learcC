#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*
	FILE *pfin, *pfout;
	char ch;  // 儲存讀取的字元
	pfin = fopen("story.txt", "r");
	pfout = fopen("styout.txt", "w"); // 開啟檔案
	if (pfin == NULL || pfout == NULL) {
		printf("檔案開啟失敗\n"); system("pause"); return(0);
	}
	while (!feof(pfin)) {
		ch = fgetc(pfin); fputc(ch, pfout); // 讀取一個字元就寫出一個字元
	}
	*/
	fclose(pfin); fclose(pfout); system("pause"); return(0);
}
