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
	struct invoice std = { "嗚嗚ㄚㄚ","2022/12/25","PC","P01"};

	printf("公司名稱:%s 交易日期:%s\n", std.customer, std.data);
	printf("產品名稱:%s 產品編號:%s\n", std.prd.name, std.prd.id);
	printf("第一季銷量:"); scanf("%d", &std.prd.sales[0]);
	printf("第二季銷量:"); scanf("%d", &std.prd.sales[1]);
	printf("第三季銷量:"); scanf("%d", &std.prd.sales[2]);
	printf("第四季銷量:"); scanf("%d", &std.prd.sales[3]);
	std.prd.fave = (std.prd.sales[0] + std.prd.sales[1] + std.prd.sales[2] + std.prd.sales[3]) / 4.0f; // 計算平均
	printf("%s 的平均銷量為%5.2f\n", std.prd.name, std.prd.fave);
}