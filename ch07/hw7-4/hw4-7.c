#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sun(int);

int main(void)
{
	int y;
	printf("��Jx:");
	scanf("%d", &y);
	sun(y);

	system("pause"); return (0);
}

void sun(int x) {
	int n, i = 0,xx=x;
	printf("��Jn:");
	scanf("%d", &n);
	do {
		if (xx % n) {printf("���O\n");break;}
		if (x == 1) { printf("%d = %d �� %d����\n",xx,n,i); break; }
		i++;
	} while (x /= n);
	//printf("�`�M:%d\n", total);
}