#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	char ch;
	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);
	printf("�п�J�@�Ӧr��: ");
	scanf(" %c", &ch);
	printf("num=%d,ascii of ch=%d\n", num, ch);
	system("pause"); return(0);
}

