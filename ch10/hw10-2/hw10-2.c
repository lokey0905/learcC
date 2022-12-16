#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE* pfile; // 宣告指向檔案的結構指標
	char ch;	  // 存放讀取的字元
	int iNum = 0;  // 計算英文字母的個數
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	int sum[26] = { 0 };
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("..//prog10-3//story.txt 檔案無法開啟"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// 判斷是否讀到檔案尾
		ch = fgetc(pfile);	// 讀取一個字元
		//putchar(ch);		// 輸出讀取的字元
		//if (isalpha(ch)) iNum++; //如果是英文字母 iNum 就加1
		

		if (ch >= 'a') {
			sum[ch - 'a']++;
		}
		else sum[ch - 'A']++;
	}
	//printf("\n\nstory.txt 共包含%3d 個英文字母\n", iNum);
	//printf("\n\n");
	for (int ii = 0;ii < 26;ii++) {
		printf("字母 %c或%c 共出現%4d次\n",ii+'A', ii + 'a', sum[ii]);
	}
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}
