#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cx, cy; int ix = 0;
	printf("��J�@�Ӿ��:"); scanf("%d", &ix);
	printf("��J�@�Ӧr��:"); scanf("%c", &cx);
	printf("��J�@�Ӧr��:"); scanf("%c", &cy);
	printf("\ncx = %c, cy = %c, ix = %d\n", cx, cy, ix);
	system("pause");
	return(0);
}