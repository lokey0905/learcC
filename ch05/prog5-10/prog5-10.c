#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix, iy, iMax;
	printf("�п�J��Ӽ�, �����d�@�Ӫť�: ");
	scanf("%d%d", &ix, &iy);
	//iMax = ix > iy ? ix : iy; /* ��� ix �P iy, �]�w���j�Ƶ� iMax */

	printf("���j�Ƭ�: %d\n", iMax);
	system("pause"); return 0;
}
