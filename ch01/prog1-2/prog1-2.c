#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int attack;
	int defence;
	printf("輸入攻擊力:\n");
	scanf("%d", &attack);
	printf("輸入防禦力:\n");
	scanf("%d", &defence);
	printf("對怪物攻擊力為:%d\n", attack * 3 - defence * 2);
	system("pause");
	return(0);
}   