#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int x , y;
	printf("******************************九九乘法表********************************\n");
	for (x = 1;x < 10;x++) {
		for (y = 1;y <10;y++) {
			printf("%d*%d=%2d  ",  x,  y, x * y);
			if (y == 9) printf("\n");
		}
	} 
	printf("*************************************************************************\n");
	system("pause");
	return 0;
}