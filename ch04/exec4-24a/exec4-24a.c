#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mathx(int x)
{
	x=3 * x + 105;
	return x;
}
int main(void)
{
	int ix;
	while (1) {
		printf("請輸入數字:");
		scanf("%d", &ix);
		if (!ix) break;
		ix=mathx(ix);		/*呼叫 XPrint 函式,設定 id為引數 */
		printf("mathx回傳值:%d\n",ix);
	}
	system("pause"); return(0);
}
