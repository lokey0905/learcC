#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int ix;
	printf("�п�J�@�ӤQ�i���:");
	scanf("%d", &ix);
	printf("10�i��        ");
	printf("8 �i��        ");
	printf("16�i��        \n");
	printf("------------------------------------------\n");
	printf("%-14d%-#14o%#-14x\n", ix, ix, ix);
	system("pause");
	return(0);
}