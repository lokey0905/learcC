#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // �禡�쫬�ŧi

void sun(int);

int main(void)
{
	int y;
	printf("��J����:");
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
	printf("�`�M:%d\n", total);
}