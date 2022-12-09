#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x[4]={1};
	int y[4] = { 1,3 };
	int z[4] = { 0 };
	int k[4] = { 3,-1,5,21 };
	int i;
	for (i = 0;i < 4;i++)  printf("x[%d]=%d\n", i, x[i]);
	printf("-------------------\n");
	for (i = 0;i < 4;i++)  printf("y[%d]=%d\n", i, y[i]);
	printf("-------------------\n");
	for (i = 0;i < 4;i++)  printf("z[%d]=%d\n", i, z[i]);
	printf("-------------------\n");
	for (i = 0;i < 4;i++)  printf("k[%d]=%d\n", i, k[i]);
	printf("-------------------\n");
	system("pause"); return(0);
}
