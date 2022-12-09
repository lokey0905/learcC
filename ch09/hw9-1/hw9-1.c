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
	printf("輸入廠牌: "); scanf("%s", stu.Name);
	printf("輸入記憶體大小: "); scanf("%d", &stu.ram);
	printf("輸入作業系統: "); scanf("%s", stu.system);
	printf("輸入硬碟大小: "); scanf("%d", &stu.size);

	printf("\n");
	printf("廠牌為:%s\n", stu.Name);
	printf("記憶體大小為:%dG\n", stu.ram);
	printf("作業系統為:%s\n", stu.system);
	printf("記憶體大小為:%dG\n", stu.size);

	system("pause"); return(0);
}
