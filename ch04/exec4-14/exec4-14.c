#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix=0;
	
	if(ix==1)	printf("ix==1\n");
	if (ix = 1)	printf("ix==1\n");
	printf("�п�Jix����:");
	scanf("%d", &ix);
	if (ix != 1)	printf("ix��=1,ix=%d\n",ix);
	if (!(ix%2))	printf("ix=%d,�ҥHix�O����\n", ix);
	if (!(ix) % 2)	printf("ix=%d,�ҥHix�O����\n", ix);

	system("pause");
	return(0);
}
