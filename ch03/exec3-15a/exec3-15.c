#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch; int ix = 0;
	printf("輸入一個整數:"); scanf("%d", &ix);
	fflush(stdin); // 清除輸入緩衝區的內容, fflush(stdin)在MicroSoft Visual Studio 沒有功用
	rewind(stdin);
	printf("輸入一個字元:"); ch = getchar();
	printf("ch = %d, ix = %d\n", ch, ix);
	system("pause");
	return(0);
}