#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product
{
	char pname[20];
	int pid;
	int num;
};

int main(void)
{
	FILE* pfile; // 宣告指向檔案的結構指標
	struct product pro = {""};
	//char cStr[20];	  // 存放讀取的字元
	int iNum = 0;  // 計算英文字母的個數 
	if ((pfile = fopen("Itemlist.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("檔案無法開啟"); system("pause"); return(0);
	}
	printf("品名   單價	數量 總價\n");
	while (!feof(pfile)) {	// 判斷是否讀到檔案尾
		if (fscanf(pfile, "%s %d %d", &pro.pname, &pro.pid, &pro.num) != EOF)
		{
			
			printf("%4s   %4d  %4d %4d\n", pro.pname, pro.pid, pro.num, pro.pid * pro.num);
			iNum += pro.pid * pro.num;
		}
	}
	printf("%4s   %4s  %4s %4d\n", "","", "", iNum);
	//printf("story.txt 共包含%3d 個英文單字\n", iNum);
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}