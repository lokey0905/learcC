#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char x;
	printf("�п�J�@�Ӧr��, �k�ͽЫ�(M��m), �k�ͽЫ�(F��f):");
	scanf("%c", &x);

	if (x=='M'||x=='m') printf("�z�O�k��\n");
	else printf("�z�O�k��\n");
	printf("�����{��\n");
	system("pause");
	return(0);
}
