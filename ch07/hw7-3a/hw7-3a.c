#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // 函式原型宣告

void sun(int);

int main(void)
{
	int y;
	printf("輸入項數:");
	scanf("%d", &y);
	sun(y);

	system("pause"); return (0);
}

void sun(int x) {
	int total = 0,n;
	for (int i = 1;i <= x;i++) {
		n = (i * 2 - 1) * 2;
		total += n;
	}
	printf("總和:%d\n", total);
}