#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product{
	char pName[20];
	char pID[10];
	int first;
	int sec;
	int third;
	int fourth;
	float fAve;
} stu1 = { "PC","P01",1234,2214, 6492,1234 }, stu2 = { "筆電","P02",1782,3291,2781,5321 }, stu3 = { "手機",	"P03"   ,6289	,6519  ,5210   ,2213 };

	int main(void)
	{
		printf("輸入產品名稱:%s \n", stu1.pName);
		printf("輸入產品編碼:%s \n", stu1.pID);
		printf("第一季銷量:%d \n", stu1.first); 
		printf("第二季銷量:%d \n", stu1.sec); 
		printf("第三季銷量:%d \n", stu1.third);
		printf("第四季銷量:%d \n", stu1.fourth);
		stu1.fAve = (stu1.first + stu1.sec + stu1.third + stu1.fourth) / 4.0f; // 計算平均
		printf("%s 的平均銷量為%5.2f\n", stu1.pName, stu1.fAve);
		printf("\n\n");
		printf("輸入產品名稱:%s \n", stu2.pName);
		printf("輸入產品編碼:%s \n", stu2.pID);
		printf("第一季銷量:%d \n", stu2.first);
		printf("第二季銷量:%d \n", stu2.sec);
		printf("第三季銷量:%d \n", stu2.third);
		printf("第四季銷量:%d \n", stu2.fourth);
		stu2.fAve = (stu2.first + stu2.sec + stu2.third + stu2.fourth) / 4.0f; // 計算平均
		printf("%s 的平均銷量為%5.2f\n", stu2.pName, stu2.fAve);
		printf("\n\n");
		printf("輸入產品名稱:%s \n", stu3.pName);
		printf("輸入產品編碼:%s \n", stu3.pID);
		printf("第一季銷量:%d \n", stu3.first);
		printf("第二季銷量:%d \n", stu3.sec);
		printf("第三季銷量:%d \n", stu3.third);
		printf("第四季銷量:%d \n", stu3.fourth);
		stu3.fAve = (stu3.first + stu3.sec + stu3.third + stu3.fourth) / 4.0f; // 計算平均
		printf("%s 的平均銷量為%5.2f\n", stu3.pName, stu3.fAve);
		
		system("pause"); return(0);
	}
