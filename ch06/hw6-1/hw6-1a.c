#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int iTotal = 0;	/* 設定總和為 0 */

	for (int i = 3;i <= 999;i++) {
		if (!(i % 3)) {
			iTotal = iTotal + i;
			//printf("%d", i);
			//if (i != 999) printf(" + ");
		}
	}
	printf("3+6+9+...+999 = %d\n", iTotal);
	system("pause"); return(0);
}
