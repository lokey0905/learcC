#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tea, coffee, total;
	printf("�аݧA�n�ʶR�X�~����:\n");
	scanf("%d", &tea);
	printf("�аݧA�n�ʶR�X�~�@��:\n");
	scanf("%d", &coffee);
	total = tea*25 +  coffee*35;
	printf("�ʶR�`����:%d \n", total);
	system("pause");
	return(0);
 }