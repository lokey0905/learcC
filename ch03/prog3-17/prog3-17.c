#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cAsk1[20] = "輸入你的姓名:";
	char cAsk2[20] = "輸入你的學號:";
	char cName[20];
	char cId[20];
	char ch;
	printf("%s", cAsk1);
	scanf("%[A-Za-z0-9 ]", cName); // 輸入姓名
	fflush(stdin);
	puts(cAsk2);
	ch = getchar();
	gets(cId);	// 輸入學號
	printf("你的姓名: %s 學號: %s\n", cName, cId);
	printf("%s", cAsk1);
	scanf("%s", cName); //瞭解字串的儲存內容
	system("pause");
	return(0);
}