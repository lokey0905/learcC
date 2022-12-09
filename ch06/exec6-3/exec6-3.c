#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 9, y = 9;
	printf("******************************九九乘法表********************************\n");
	 do{
		y = 9;
		 do{
			printf("%d*%d=%2d  ", 10 - x, 10 - y, (10 - x) * (10 - y));
			if (y == 1) printf("\n");
			y--;
		}while (y);
		x--;
	 } while (x);
	printf("*************************************************************************\n");
	system("pause");
	return 0;
}