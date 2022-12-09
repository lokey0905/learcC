#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void abc(int);
void abc(int n) {
	n += 1;
	printf("%d\n", n);
}

int main(void)
{
	int i=10;
	printf("%d\n",i);
	abc(i);
	printf("%d\n", i);
	system("pause"); return (0);
}