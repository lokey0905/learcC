#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("輸入num:");
	scanf("%d", &num);
	
	if (num) {
		printf("num大於0\n");
	}
	printf("結束程式\n");
	system("pause");
	return(0);
}
