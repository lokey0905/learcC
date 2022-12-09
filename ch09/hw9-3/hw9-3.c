#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct StudentInfo { // 以 typedef 重新命名
	char  cName[10];//學生姓名
	char from[10];
	int	  iYear;    //出生年
	char o;
} STUDENTINFO, * PSTUDENTINFO; // *PSTUDENTINFO 代表指標變數型別
void PrintInfo(PSTUDENTINFO); // 等同於 void PrintInfo(struct StudentInfo *)
int main(void)
{
	STUDENTINFO stuX = { "John","台北",1990,'o' }; // 等同於 struct StudentInfo stuX =...
	//PrintInfo(&stuX); // PrintInfo 以傳指標方式輸出變數內容
	printf("  姓名:"); scanf("%s", &stuX.cName);
	printf("出生地:"); scanf("%s", &stuX.from);
	printf("出生年:"); scanf("%s", &stuX.iYear);
	printf("  血型:"); scanf("%s", &stuX.o);
	printf("\n%s \n出生地: %s\n出生於: %4d 年\n血型:%c\n", stuX.cName, stuX.from, stuX.iYear, stuX.o);
	system("pause"); return(0);
}
void PrintInfo(PSTUDENTINFO stu) //等同於void PrintInfo(struct StudentInfo *stu)
{
	printf("%s 出生於 %4d 年\n", stu->cName, stu->iYear);
	strcpy(stu->cName, "Mary"); stu->iYear = 1989;  // 重新設定變數的內容
}
