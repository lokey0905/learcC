#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '		/* 利用 #define 定義空白字元的常數名稱 */
int main(void)
{
	char ch;
	ch = getchar();		/* 讀取字元 */
	//while (ch != '\n')	/* 是否讀到換行字元 */
	//{
		if (ch == SPACE) putchar(ch); /* 空白鍵不處理*/
		else  putchar(ch + 12);	/* 其他的字元，將其 ASCII 編碼加 12 後輸出 */
		ch = getchar(); /* 讀取下一個字元 */
	//}
	putchar(ch);	/* 輸出最後的換行字元 */
	system("pause");
	return 0;
}