#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int attack;
	int defence;
	printf("��J�����O:\n");
	scanf("%d", &attack);
	printf("��J���m�O:\n");
	scanf("%d", &defence);
	printf("��Ǫ������O��:%d\n", attack * 3 - defence * 2);
	system("pause");
	return(0);
}   