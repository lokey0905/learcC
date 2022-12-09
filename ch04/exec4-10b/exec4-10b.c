#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char s1[16]={0}, s2[16] = { 0 };
	printf("輸入第1個字串:");
	scanf("%s", s1);
	printf("輸入第2個字串:");
	scanf("%s", s2);
	//printf("%s %s", s1, s2);
	if (s1[0] < s2[0])	printf("第1個字串 < 第2的字串\n");
	else if (s1[0] == s2[0])	printf("第1個字串 = 第2的字串\n");
	else printf("第1個字串 > 第2的字串\n");
	printf("結束程式\n");
	system("pause");
	return(0);
}
