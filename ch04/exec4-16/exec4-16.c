#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b = 20, c = 30;
	a = b++ + ++c; printf("a=%d, b=%d, c=%d\n", a, b, c); // 輸出: a=51, b=21, c=31
	a = b-- - --c; printf("a=%d, b=%d, c=%d\n", a, b, c); // 輸出: a=-9, b=20, c=30
	a += b++ + --c;printf("a=%d, b=%d, c=%d\n", a, b, c); // 輸出: a=40, b=21, c=29
	a -= b-- + ++c;printf("a=%d, b=%d, c=%d\n", a, b, c); // 輸出: a=-11, b=20, c=30
}