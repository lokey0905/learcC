#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE* pfile;
	char a[3], b[3], c[80],d[3], e[3], f[3],g[20];
	if ((pfile = fopen("message.txt", "r+")) == NULL) {
		printf("message.txt 檔案無法開啟");
		system("pause"); return(0);
	} // 開啟更新的檔案
	while (!feof(pfile)) { // 顯示檔案的內容
		fgets(c, 80, pfile); printf("%s", c);
	}
	rewind(pfile); //讀寫頭回到檔案頭
	//printf("\n輸入到貨日期:");
	/*gets(cDate);/*
	if (strlen(cDate) == 1) { //日期只有一個字元
		cDate[2] = '\0'; cDate[1] = cDate[0]; cDate[0] = ' ';// 前面補一個空白
	}*/
	printf("\n輸入訂位者姓氏:");
	gets(a);
	printf("\n男1女2:");
	gets(b);
	printf("\n訂位人數:");
	gets(d);
	printf("\n提早到達時間:");
	gets(e);
	printf("\n可取消天數:");
	gets(f);
	printf("\n電話:");
	gets(g);
	// 將讀寫頭指向日期的位置,中文是兩個Bytes
	fseek(pfile, 0, SEEK_SET);
	fputs(a, pfile);
	fseek(pfile, 2, SEEK_SET);
	fputs(b=="1" ? "先生" : "女士", pfile);
	fseek(pfile, 23, SEEK_SET);
	fputs(d, pfile);
	fseek(pfile, 45, SEEK_SET);
	fputs(e, pfile);
	fseek(pfile, 79, SEEK_SET);
	fputs(f, pfile);
	fseek(pfile, 98, SEEK_SET);
	fputs(g, pfile);
	rewind(pfile); //讀寫頭回到檔案頭
	while (!feof(pfile)) { // 顯示檔案的內容
		fgets(c, 80, pfile); printf("%s", c);
	}
	printf("\n");
	fclose(pfile); system("pause"); return(0); // 關閉檔案
}
