#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix=0;
	
	if(ix==1)	printf("ix==1\n");
	if (ix = 1)	printf("ix==1\n");
	printf("叫块ix:");
	scanf("%d", &ix);
	if (ix != 1)	printf("ixぃ=1,ix=%d\n",ix);
	if (!(ix%2))	printf("ix=%d,┮ix琌案计\n", ix);
	if (!(ix) % 2)	printf("ix=%d,┮ix琌案计\n", ix);

	system("pause");
	return(0);
}
