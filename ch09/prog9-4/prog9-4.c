#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct StuScores {
	char cStuName[10]; // 姓名
	int iChi;	// 國文成績
	int iEng;	// 英文成績
	int iMat;	// 數學成績
	float fAve; // 平均成績
};
int main(void)
{
	struct  StuScores stu; // 宣告結構變數stu
	printf("輸入姓名: "); gets(stu.cStuName);  // 輸入姓名
	printf("國文成績: "); scanf("%d", &stu.iChi); // 輸入國文成績
	printf("英文成績: "); scanf("%d", &stu.iEng); // 輸入英文成績
	printf("數學成績: "); scanf("%d", &stu.iMat); // 輸入數學成績
	stu.fAve = (stu.iChi + stu.iEng + stu.iMat) / 3.0f; // 計算平均
	printf("%s 的平均成績為%5.2f\n", stu.cStuName, stu.fAve);
	system("pause"); return(0);
}
