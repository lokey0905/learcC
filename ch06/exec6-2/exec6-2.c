#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, n;
	int iTotal = 0;	/* �]�w�`�M�� 0 */
	int iStatus;	/* �O�_��J�Ʀr */
	char ch;
	printf("��J�@�Ӥj�� 1 ����: ");
	iStatus = scanf("%d", &n);
	while (n <= 1 || iStatus == 0) {
		printf("��J�@�Ӥj�� 1 ����: ");
		iStatus = scanf("%d", &n);
		//printf("iStatus:%d\n", iStatus);
		//ch = getchar();
		fflush(stdin); /* �M����J�w�İϪ����e */
	} 
	i = 1; /* �t�d 1+2+...+n �����W�� */
	while (i <= n)
	{
		iTotal += i; /* �[�` */
		i = i + 1;
	} 
	printf("1+...+%d = %d \n", n, iTotal);
	system("pause"); return(0);
}
