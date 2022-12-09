#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int tea, coffee;
	int count, total;
	printf("輸入購買茶的數量:");
	scanf("%d", &tea);
	printf("輸入購買咖啡的數量:");
	scanf("%d", &coffee);
	total = tea * 25 + coffee * 35;
	count = tea + coffee;
	if (count > 20) {
		printf("購買超過20，打85折\n");
		total = total * 0.85;
	}
	printf("應付總價：%d \n", total);
	system("pause");
	return(0);
}
