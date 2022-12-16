#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;// 存放讀取的字元
	FILE* pfile;// 宣告指向檔案的結構指標
	if ((pfile = fopen("..\\prog10-1\\myfirst.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("story.txt 檔案無法開啟\n"); system("pause"); return(0);
	}
	
		while (!feof(pfile)) {	// 判斷是否讀到檔案尾
			ch = fgetc(pfile);	// 讀取一個字元
			putchar(ch);		// 輸出讀取的字元
		}
	
	fclose(pfile); // 關閉檔案
	printf("\n");
	system("pause"); return(0);
}
