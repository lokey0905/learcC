#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, n;
	int iTotal = 0;	/* �]�w�`�M�� 0 */
	int iStatus;	/* �O�_��J�Ʀr */
	char ch;
	do {
		printf("��J�@�Ӥj�� 1 ����: ");
		iStatus = scanf("%d", &n);
		//printf("iStatus:%d\n", iStatus);
		//ch = getchar();
		fflush(stdin); /* �M����J�w�İϪ����e */
	} while (n <= 1 || iStatus == 0);
	i = 1; /* �t�d 1+2+...+n �����W�� */
	do
	{
		iTotal += i; /* �[�` */
		i = i + 1;
	} while (i <= n);
	printf("1+...+%d = %d \n", n, iTotal);
	system("pause"); return(0);
}
