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
} stu1 = { "PC","P01",1234,2214, 6492,1234 }, stu2 = { "筆電","P02",1782,3291,2781,5321 }, stu3 = { "手機",	"P03"   ,6289	,6519  ,5210   ,2213 };

int main(void)	{
	struct product stu4;
	char ch;

	stu4 = stu1;  // 將 cake1 中的成員內容指定給(複製) cake2
	printf("輸入黑森林蛋糕的商品編號: ");
	scanf("%s", &stu4.pID);  // 將字串"黑森林",複製到 cake2.cName 中
	printf("輸入第一季銷量: "); scanf("%d", &stu4.first);
	//fflush(stdin); // 清除輸入緩衝區的內容
	//ch = getchar();
	/*printf("輸入黑森林蛋糕的保存期限: "); gets(&cake2.cExpirDate);
	printf("%s蛋糕的商品編號: %4d 售價 %3d元 保存期限 %s\n"
		, cake2.cName, cake2.iSerialNo, cake2.iPrice, cake2.cExpirDate);*/
	//printf("輸入產品名稱:%s \n", stu4.pName);
	printf("輸入產品編碼:%s \n", stu4.pID);
	printf("第一季銷量:%d \n", stu4.first);
	printf("第二季銷量:%d \n", stu4.sec);
	printf("第三季銷量:%d \n", stu4.third);
	printf("第四季銷量:%d \n", stu4.fourth);
	system("pause"); return(0);
}
