#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product {
	char Name[20];
	int ram;
	char system[20];
	int size;
};

int main(void)
{
	struct product stu;
	printf("��J�t�P: "); scanf("%s", stu.Name);
	printf("��J�O����j�p: "); scanf("%d", &stu.ram);
	printf("��J�@�~�t��: "); scanf("%s", stu.system);
	printf("��J�w�Фj�p: "); scanf("%d", &stu.size);

	printf("\n");
	printf("�t�P��:%s\n", stu.Name);
	printf("�O����j�p��:%dG\n", stu.ram);
	printf("�@�~�t�ά�:%s\n", stu.system);
	printf("�O����j�p��:%dG\n", stu.size);

	system("pause"); return(0);
}
