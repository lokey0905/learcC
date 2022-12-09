#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=0;

	for (int i = 0;i < 101;i++)		x = x + i;
	printf("1+2+.....+100 =%12d\n",x);

	x = 0;
	for (int i = 0;i < 1001;i++)		x = x + i;
	printf("1+2+....+1000 =%12d\n", x);

	x = 0;
	for (int i = 0;i < 10001;i++)		x = x + i;
	printf("1+2+...+10000 =%12d\n", x);

	x= 0;
	for (int i = 0;i < 50001;i++)		x = x + i;
	printf("1+2+...+50000 =%12d\n", x);
	
	system("pause");
	return(0);
}
