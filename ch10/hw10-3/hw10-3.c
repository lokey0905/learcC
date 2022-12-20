#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
	FILE* pfile; // 宣告指向檔案的結構指標
	char ch;	  // 存放讀取的字元
	int iNum = 0;  // 計算英文字母的個數
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	int sum[26] = { 0 };
	int ifd, ilen;/*
	if ((pfile = fopen("..//prog10-3//story.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("..//prog10-3//story.txt 檔案無法開啟"); system("pause"); return(0);
	}*/
	ifd = _open("..//prog10-3//story.txt", O_RDWR);
	if (ifd == -1) {
		printf("..//prog10-3//story.txt 檔案無法開啟"); system("pause"); return(0);
	}
	
	_lseek(ifd, 0, SEEK_SET);		 // 讀寫頭回到檔案頭

	while (!_eof(ifd)) {	// 判斷是否讀到檔案尾
		_read(ifd, &ch, sizeof(char));
		if (ch >= 'a') {
			sum[ch - 'a']++;
		}
		else sum[ch - 'A']++;
	}
	
	for (int ii = 0;ii < 26;ii++) {
		printf("字母 %c或%c 共出現%4d次\n", ii + 'A', ii + 'a', sum[ii]);
	}
	_close(ifd); // 關閉檔案
	system("pause"); return(0);
}
