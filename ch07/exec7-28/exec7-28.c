#include <stdio.h>
#include <stdlib.h>
long Sum(long n) /* �w�q�p�ⶥ�����禡*/
{
	long ret; // �x�s���������G,�w�]�� 1
	if (n == 1) return(1); // �פ�I�s������, ���]�I�s�ɤ޼Ƥ��e�@�w >=1
	ret = n + Sum(n - 1);
	return(ret);
}

int main(void)
{
	long n=5;
	printf("%d",Sum(n));


	system("pause"); return(0);
}
