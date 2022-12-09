#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sun(int);

int main(void)
{
	int y;
	printf("輸入x:");
	scanf("%d", &y);
	sun(y);

	system("pause"); return (0);
}

void sun(int x) {
	int n, i = 0,xx=x;
	printf("輸入n:");
	scanf("%d", &n);
	do {
		if (xx % n) {printf("不是\n");break;}
		if (x == 1) { printf("%d = %d 的 %d次方\n",xx,n,i); break; }
		i++;
	} while (x /= n);
	//printf("總和:%d\n", total);
}