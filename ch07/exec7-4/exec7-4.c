#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // �禡�쫬�ŧi

int sun(int);

int main(void)
{
	int y,total;
	printf("��J�@�ӥ����:");
	scanf("%d", &y);
	total = sun(y);
	printf("total:%d", total);
	system("pause"); return (0);
}

int sun(int x) {
	int total = 0;
	for (int i = 1;i <= x;i++)	total += i;
	return total;
}

