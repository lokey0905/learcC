#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=0, y=0;
	//printf("輸入數字x,y:");
	//scanf("%d %d", &x, &y);
	while (x < 9999) {
		x += 2;
		y = y + x;
	}
	printf("1到10000之間，所有2倍數的總和是: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 3;
		y = y + x;
	}
	printf("1到10000之間，所有3倍數的總和是: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 5;
		y = y + x;
	}
	printf("1到10000之間，所有5倍數的總和是: %d\n", y);
	system("pause");
	return(0);
}
