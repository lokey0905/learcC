#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile; // 宣告指向檔案的結構指標
	//char cStr[20];	  // 存放讀取的字元
	int iNum = 0;  // 計算英文字母的個數 
	if ((pfile = fopen("story.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("story.txt 檔案無法開啟"); system("pause"); return(0);
	}
	/*
	while (!feof(pfile)) {	// 判斷是否讀到檔案尾
		fscanf(pfile, "%s", cStr);
		iNum++; // 每讀入一個字串就加1
		printf("第%d個字: %s\n", iNum, cStr);	
	}
	printf("story.txt 共包含%3d 個英文單字\n", iNum);
	*/
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}
