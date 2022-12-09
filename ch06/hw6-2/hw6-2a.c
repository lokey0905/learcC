#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
	//int i, j;
	//printf("  *"); /* 輸出第一行的*/
	for (int k = 0;k < 7;k++) {
		for (int s = 0;s < 7-k-1;s++)	printf(" ");
		for (int t = 0;t < k*2+1;t++)	printf("*");
		printf("\n");
	}
	system("pause"); return(0);
}
