#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct product
{
	char name[20];
	char id[20];
	int sales[4];
	float fave;
};
struct invoice
{
	char customer[20];
	char data[12];
	struct product prd;
};
int main() {
	struct invoice std = { "��㣫��","2022/12/25","PC","P01"};

	printf("���q�W��:%s ������:%s\n", std.customer, std.data);
	printf("���~�W��:%s ���~�s��:%s\n", std.prd.name, std.prd.id);
	printf("�Ĥ@�u�P�q:"); scanf("%d", &std.prd.sales[0]);
	printf("�ĤG�u�P�q:"); scanf("%d", &std.prd.sales[1]);
	printf("�ĤT�u�P�q:"); scanf("%d", &std.prd.sales[2]);
	printf("�ĥ|�u�P�q:"); scanf("%d", &std.prd.sales[3]);
	std.prd.fave = (std.prd.sales[0] + std.prd.sales[1] + std.prd.sales[2] + std.prd.sales[3]) / 4.0f; // �p�⥭��
	printf("%s �������P�q��%5.2f\n", std.prd.name, std.prd.fave);
}