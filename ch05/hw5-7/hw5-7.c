#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c,m;
	printf("�п�J�T����ABC�T���:\n");
	//scanf("%d%d%d", &a, &b, &c);
	printf("AB���: ");
	scanf("%d", &c);
	printf("BC���: ");
	scanf("%d", &a);
	printf("AC���: ");
	scanf("%d", &b);
	if(a+b>c&&b+c>a&&a+c>b)	printf("�i�H�T����\n");
	else	printf("����O�T����\n");
	system("pause"); return 0;
}
