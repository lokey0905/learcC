#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
int main(void)
{
	int ifin, ifout;
	char cBuf[30];
	int  iLen;
	ifin = _open("story.txt", O_RDONLY);
	ifout = _open("unstory.txt", O_CREAT | O_WRONLY, S_IWRITE);
	if (ifin == -1 || ifout == -1) {
		printf("檔案開啟失敗"); system("pause"); return(0);
	}
	/*
	while (!_eof(ifin)) {
		iLen = _read(ifin, cBuf, 16); // 一次最多讀取 16 個位元組
		_write(ifout, cBuf, iLen);
		cBuf[iLen] = '\0'; // 設定成字串輸出
		printf("讀取%2d Bytes.內容:%s\n", iLen, cBuf);
	}
	*/
	_close(ifin); _close(ifout); system("pause"); return(0); // 關閉檔案
}
