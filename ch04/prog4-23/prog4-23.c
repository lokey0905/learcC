#include <stdio.h>
#include <stdlib.h>
//void XPrint(int n)
//{
//	int i = 1;
//	while (i <= n)	/* i <= n 只要滿足都會持續執行迴圈 */
//	{
//		printf("*");	/* 印出一個 * 號 */
//		i++;	/* i 的內容遞增 1, 也就是 i = i + 1*/
//	}
//	printf("\n");	/* 輸出一個換行符號 */
//}

int main(void)
{
	XPrint(10);	/*呼叫 XPrint 函式,設定 10 為引數的值 */
	system("pause"); return(0);
}
