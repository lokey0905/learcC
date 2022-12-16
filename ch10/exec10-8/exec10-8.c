#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct StuInfo {
	int	 iID;
	char cName[10];
	char cBirthday[10];
};
int main(void)
{
	FILE* pfile; // 宣告指向檔案的結構指標
	char cStr[20];	  // 存放讀取的字元
	int iNum = 0, i = 0;  // 計算英文字母的個數 
	struct StuInfo stu[5];
	if ((pfile = fopen("..\\prog10-7\\stuinfo.txt", "r")) == NULL) {  // 判斷檔案是否開啟失敗
		printf("story.txt 檔案無法開啟"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// 判斷是否讀到檔案尾
			if (fscanf(pfile, "%d %s %s", &stu[i].iID, stu[i].cName, stu[i].cBirthday) != EOF)
		{
			iNum++; // 每讀入一個字串就加1
			//printf("第%d字: %s\n", iNum, cStr);
		}
	}
	iNum = i; printf("學號   姓名    生日\n");
	for (i = 0; i < iNum; i++)
		printf("%d %s %s\n", stu[i].iID, stu[i].cName, stu[i].cBirthday);
	fclose(pfile); // 關閉檔案
	system("pause"); return(0);
}