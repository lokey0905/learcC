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
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("..//prog10-3//story.txt 檔案無法開啟"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// 判斷是否讀到檔案尾
		ch = fgetc(pfile);	// 讀取一個字元
		putchar(ch);		// 輸出讀取的字元
		//if (isalpha(ch)) iNum++; //如果是英文字母 iNum 就加1
		switch (ch) {
		case 'a':case 'A':
			a++; break;

		case 'e':case 'E':
			e++; break;

		case 'i':case 'I':
			i++; break;

		case 'o':case 'O':
			o++; break;

		case 'u':case 'U':
			u++; break;

		}
	}
	//printf("\n\nstory.txt 共包含%3d 個英文字母\n", iNum);
	printf("\n\n");
	printf("字母a共出現%d次\n", a);
	printf("字母e共出現%d次\n", e);
	printf("字母i共出現%d次\n", i);
	printf("字母o共出現%d次\n", o);
	printf("字母u共出現%d次\n", u);
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}
