#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int tea, coffee;
	int count, total;
	printf("�п�J�ʶR�����ƶq:\n");
	scanf("%d", &tea);
	printf("�п�J�ʶR�@�ؼƶq:\n");
	scanf("%d", &coffee);
	count = tea + coffee;
	total = tea * 25 + coffee * 35;
	
	if (count >= 20)
	{	
		total = total * 0.85;
		printf("������:%d\n",total);
	}
	else 
	{
		printf("������:%d\n", total);
	}
	
}