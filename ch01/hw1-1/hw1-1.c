#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int tea, coffee;
	int count, total;
	printf("請輸入購買茶的數量:\n");
	scanf("%d", &tea);
	printf("請輸入購買咖啡數量:\n");
	scanf("%d", &coffee);
	count = tea + coffee;
	total = tea * 25 + coffee * 35;
	
	if (count >= 20)
	{	
		total = total * 0.85;
		printf("價錢為:%d\n",total);
	}
	else 
	{
		printf("價錢為:%d\n", total);
	}
	
}