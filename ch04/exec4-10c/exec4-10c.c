#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x;
	printf("��J�@�ӼƦr:");
	scanf("%d", &x);

	if(x) printf("���󤤬O%d\n",x);
	printf("--------------------\n");
	if (0) printf("���󤤬O0\n");
	if (1) printf("���󤤬O1\n");
	if (0.02) printf("���󤤬O0.02\n");
	if (-2) printf("���󤤬O-2\n");

	system("pause");
	return(0);
}