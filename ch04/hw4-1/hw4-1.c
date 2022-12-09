#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=0, y=0;
	//printf("块计x,y:");
	//scanf("%d %d", &x, &y);
	while (x < 9999) {
		x += 2;
		y = y + x;
	}
	printf("110000ぇ丁┮Τ2计羆㎝琌: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 3;
		y = y + x;
	}
	printf("110000ぇ丁┮Τ3计羆㎝琌: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 5;
		y = y + x;
	}
	printf("110000ぇ丁┮Τ5计羆㎝琌: %d\n", y);
	system("pause");
	return(0);
}
