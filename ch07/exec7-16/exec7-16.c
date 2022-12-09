#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Sum(int[], int);
int Sum(int y[], int x){
	int total=0;
	for (int i = 0;i < x;i++) {
		if(i) printf(" + ");
		printf("%d", y[i]);
		total += y[i];
	}
	printf(" = ");
	return total;
}

int main(void)
{
	int i;
	int iNumber[8] = { 2,48,94,23,56,37,71,63 };
	//printf("%d\n%d\n", b[0], b[1]);
	printf("%d\n",Sum(iNumber, 8));

	system("pause"); return (0);
}
