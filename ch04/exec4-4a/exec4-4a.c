#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int tea, coffee;
	int count, total;
	printf("��J�ʶR�����ƶq:");
	scanf("%d", &tea);
	printf("��J�ʶR�@�ت��ƶq:");
	scanf("%d", &coffee);
	total = tea * 25 + coffee * 35;
	count = tea + coffee;
	if (count > 20) {
		printf("�ʶR�W�L20�A��85��\n");
		total = total * 0.85;
	}
	printf("���I�`���G%d \n", total);
	system("pause");
	return(0);
}
