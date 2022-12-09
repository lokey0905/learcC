#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int x;
	printf("請輸入攻擊力:");
	scanf("%d",&x);
	printf("對怪物攻擊力:%d\n",x*2-15);
	system("pause");
	return(0);

}