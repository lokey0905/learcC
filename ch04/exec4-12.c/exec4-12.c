#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x,y;
	printf("��J�Ʀrx,y:");
	scanf("%d %d", &x,&y);

	if (x > y) {
		y = x * 3 + y - 5;
		printf("x�j��y,x=%d,y=%d\n");
	}
	if (x == y) {
		x = y*2+x+2;
		printf("x����y,x=%d,y=%d\n");
	}
	if (x < y) {
		x = y * 5 + x + 6;
		printf("x�p��y,x=%d,y=%d\n");
	}
	system("pause");
	return(0);
}
