#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int t=0,r; /* iCount:記錄 3 出現的次數 */
	srand((unsigned)time(NULL)); // 設定亂數產生器的起始值
	for (int i = 1; i <= 10; i++) {
		r = rand() % 30;
		t = r + t;
		printf("%d", r);
		if(i!=10)	printf(" + ");
	}
	printf(" = %d", t);
	system("pause"); return(0);
}
