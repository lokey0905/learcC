#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char s1[16]={0}, s2[16] = { 0 };
	printf("��J��1�Ӧr��:");
	scanf("%s", s1);
	printf("��J��2�Ӧr��:");
	scanf("%s", s2);
	//printf("%s %s", s1, s2);
	if (s1[0] < s2[0])	printf("��1�Ӧr�� < ��2���r��\n");
	else if (s1[0] == s2[0])	printf("��1�Ӧr�� = ��2���r��\n");
	else printf("��1�Ӧr�� > ��2���r��\n");
	printf("�����{��\n");
	system("pause");
	return(0);
}
