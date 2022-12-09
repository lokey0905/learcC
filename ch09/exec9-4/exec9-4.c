#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product {
	char pName[20]; 
	char pID[10];
	int first;	
	int sec;	
	int third;	
	int fourth;
	float fAve; 
};
int main(void)
{
	struct product stu; // 宣告結構變數stu
	printf("輸入產品名稱: "); gets(stu.pName);  // 輸入姓名
	printf("輸入產品編碼: "); gets(stu.pID);
	printf("第一季銷量: "); scanf("%d", &stu.first); // 輸入國文成績
	printf("第二季銷量: "); scanf("%d", &stu.sec); // 輸入英文成績
	printf("第三季銷量: "); scanf("%d", &stu.third); // 輸入數學成績
	printf("第四季銷量: "); scanf("%d", &stu.fourth);
	stu.fAve = (stu.first + stu.sec + stu.third+ stu.fourth) / 4.0f; // 計算平均
	printf("%s 的平均銷量為%5.2f\n", stu.pName, stu.fAve);
	system("pause"); return(0);
}
