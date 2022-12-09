#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tea, coffee, total;
	printf("請問你要購買幾瓶紅茶:\n");
	scanf("%d", &tea);
	printf("請問你要購買幾瓶咖啡:\n");
	scanf("%d", &coffee);
	total = tea*25 +  coffee*35;
	printf("購買總價為:%d \n", total);
	system("pause");
	return(0);
 }