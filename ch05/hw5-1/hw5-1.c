#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix, iy, iz, iMax;
	printf("請輸入三個數, 中間留一個空白: ");
	scanf("%d%d%d", &ix, &iy, &iz);
	iMax = ix < iy ? ix : iy; /* 比較 ix 與 iy, 設定較大數給 iMax */
	iMax = iMax < iz ? iMax : iz;
	printf("最小數為: %d\n", iMax);
	system("pause"); return 0;
}
