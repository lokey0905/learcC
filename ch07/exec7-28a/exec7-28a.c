#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long Sum(long n,long d,long a1) /* �w�q�p�ⶥ�����禡*/
{
	long ret; // �x�s���������G,�w�]�� 1
	if (n == 1) return(a1); // �פ�I�s������, ���]�I�s�ɤ޼Ƥ��e�@�w >=1
	ret = a1+(n-1)*d + Sum(n - 1, d, a1);

	//ret= 
	return(ret);
}

int main(void)
{
	long n=1,d,a1,sum;

	while (1) {
		printf("n:");
		scanf("%d", &n);
		if (!n) break;
		printf("d:");
		scanf("%d", &d);
		printf("a1:");
		scanf("%d", &a1);

		printf("%d\n\n", Sum(n, d, a1));
	}
	system("pause"); return(0);
}
