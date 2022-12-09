#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[14] = { 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40 };
	for (int i = 0;i < 14;i++) printf("a%2d = %2d\n", i + 1, a[i]);
	system("pause");
	return 0;
}