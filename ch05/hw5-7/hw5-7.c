#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c,m;
	printf("請輸入三角形ABC三邊長:\n");
	//scanf("%d%d%d", &a, &b, &c);
	printf("AB邊長: ");
	scanf("%d", &c);
	printf("BC邊長: ");
	scanf("%d", &a);
	printf("AC邊長: ");
	scanf("%d", &b);
	if(a+b>c&&b+c>a&&a+c>b)	printf("可以三角形\n");
	else	printf("不能是三角形\n");
	system("pause"); return 0;
}
