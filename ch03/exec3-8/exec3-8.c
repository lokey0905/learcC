#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int x, y, z, t;
	printf("�п�J�T�Ӿ��x y z:");
	scanf("%d%d%d", &x, &y, &z);
	printf("�洫�e: x = %d, y = %d, z = %d\n", x, y, z);
	t = x; x = y; y = z; z = t;
	printf("�洫��: x = %d, y = %d, z = %d\n", x, y, z);

	system("pause");
	return(0);
}