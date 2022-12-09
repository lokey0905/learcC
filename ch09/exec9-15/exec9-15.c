#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product {
	char pName[20];
	char pID[10];
	int sales[4];
	float fAve;
} stu1 = { "PC","P01",1234,2214, 6492,1234 }, stu2 = { "筆電","P02",1782,3291,2781,5321 }, stu3 = { "手機",	"P03"   ,6289	,6519  ,5210   ,2213 };

void printinfo(struct product stu) {
	stu.fAve = (stu.sales[0] + stu.sales[1] + stu.sales[2] + stu.sales[3]) / 4.0f;
	printf("------在函數中  前-------\n");
	printf("%s的平均銷量為%8.2f\n",stu.pName,stu.fAve);
	strcpy(stu.pName, "個人電腦"); stu.sales[0] = 2000;
	printf("------在函數中  後-------\n");
	printf("%s的平均銷量為%8.2f\n", stu.pName, stu.fAve);
}

int main(void) {
	struct product prd[3] = { {"PC","P01",1234,2211,3213,4213},
								{"NB","P02",1233,8212,1279,2130},
								{"PH","P030",2267,3287,1290,3250} };
	char ch;
	printinfo(prd[0]);
	/*stu4 = stu1;  // 將 cake1 中的成員內容指定給(複製) cake2
	printf("輸入黑森林蛋糕的商品編號: ");
	scanf("%s", &stu4.pID);  // 將字串"黑森林",複製到 cake2.cName 中
	printf("輸入第一季銷量: "); scanf("%d", &stu4.sales[0]);
	//fflush(stdin); // 清除輸入緩衝區的內容
	//ch = getchar();
	printf("輸入黑森林蛋糕的保存期限: "); gets(&cake2.cExpirDate);
	printf("%s蛋糕的商品編號: %4d 售價 %3d元 保存期限 %s\n"
		, cake2.cName, cake2.iSerialNo, cake2.iPrice, cake2.cExpirDate);
		//printf("輸入產品名稱:%s \n", stu4.pName);
	for (int i = 0;i < 3;i++) {
		printf("輸入產品名稱:"); scanf("%s", &prd[i].pName);
		printf("輸入產品編碼:"); scanf("%s", &prd[i].pID);
		printf("第一季銷量:"); scanf("%d", &prd[i].sales[0]);
		printf("第二季銷量:"); scanf("%d", &prd[i].sales[1]);
		printf("第三季銷量:"); scanf("%d", &prd[i].sales[2]);
		printf("第四季銷量:"); scanf("%d", &prd[i].sales[3]);
		prd[i].fAve = (prd[i].sales[0] + prd[i].sales[1] + prd[i].sales[2] + prd[i].sales[3]) / 4.0f; // 計算平均
		//printf("%s 的平均銷量為%5.2f\n", stu3.pName, stu3.fAve);
	}
	for (int i = 0;i < 3;i++) {
		printf("%s 的平均銷量為%5.2f\n", prd[i].pName, prd[i].fAve);
	}*/
	system("pause"); return(0);
}
