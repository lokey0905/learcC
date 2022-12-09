#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mathx(int x, int y)
{
	//x = 3 * x + 105;
	return 10 * x - 8 * y + 10;
}
int main(void)
{
	int ix,y;
	while (1) {
		printf("請輸入數字x:");
		scanf("%d", &ix);
		printf("請輸入數字y:");
		scanf("%d", &y);
		
		ix = mathx(ix,y);		/*呼叫 XPrint 函式,設定 id為引數 */
		printf("mathx回傳值:%d\n", ix);
		if (ix<0) break;
	}
	system("pause"); return(0);
}
