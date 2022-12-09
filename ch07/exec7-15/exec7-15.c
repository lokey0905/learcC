#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void abc(int []);
void abc(int a[]) {
	a[0]=-1;
	a[1] = 1;
	printf("%d\n%d\n", a[0], a[1]);
}

int main(void)
{
	int b[2] = {3,4};
	printf("%d\n%d\n", b[0],b[1]);
	abc(b);
	printf("%d\n%d\n", b[0], b[1]);
	system("pause"); return (0);
}