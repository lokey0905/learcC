#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // �禡�쫬�ŧi

void sun(int);

int main(void)
{
	int y;
	printf("��J�@�ӥ����:");
	scanf("%d", &y);
	sun(y);

	system("pause"); return (0);
}

void sun(int x) {
	int total = 0;
	for (int i = 1;i <= x;i++)	total += i;
	printf("�`�M:%d\n", total);
}