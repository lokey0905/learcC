#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE* pfile; // 宣告指向檔案的結構指標
	char pname[20]="";
	char pid[12] = "";
	char num[5];
	//char cStr[20] = "long long ago";  // 存放寫出的字元
	int i, len;
	if ((pfile = fopen("product.txt", "w")) == NULL) {
		printf("檔案無法開啟");
		system("pause"); return(0);
	}
	while (1) {
		printf("---不輸入資料請按q，按任一鍵進入輸入\n");
		if ('q' == getch()) break;
		printf("輸入產品名稱:"); scanf("%s", pname);fputs(pname, pfile);fputc(' ', pfile);
		printf("輸入產品編號:"); scanf("%s", pid);fputs(pid, pfile);fputc(' ', pfile);
		printf("輸入產品存量:"); scanf("%s", num);fputs(num , pfile);fputc('\n', pfile);

	}

	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}
