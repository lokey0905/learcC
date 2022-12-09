#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Sum(int[], int);
int Sum(int y[][4], int x, int z) {
	int total = 0;
	for (int k = 0;k < x;k++) {
		for (int i = 0;i < z;i++) {
			if (i) printf(" + ");
			printf("%d", y[k][i]);
			total += y[k][i];
		}
	}
	printf(" = ");
	return total;
}

int main(void)
{
	int i;
	int iNumber[2][4] = { {2,48,94,23},{56,37,71,63} };

	printf("%d\n", Sum(iNumber, 2, 4));

	system("pause"); return (0);
}
