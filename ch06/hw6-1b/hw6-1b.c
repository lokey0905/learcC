#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iTotal = 0;	/* �]�w�`�M�� 0 */
	for (int i = 1;i <= 1000;i++) if (!(i % 2)) iTotal = iTotal + i;
	printf("1��1000���Ҧ�2�����ƪ��M=%d\n", iTotal);
	iTotal = 0;
	for (int i = 1;i <= 1000;i++) if (!(i % 3)) iTotal = iTotal + i;
	printf("1��1000���Ҧ�3�����ƪ��M=%d\n", iTotal);
	iTotal = 0;
	for (int i = 1;i <= 1000;i++) if (!(i % 5)) iTotal = iTotal + i;
	printf("1��1000���Ҧ�5�����ƪ��M=%d\n", iTotal);
	system("pause"); return(0);
}
