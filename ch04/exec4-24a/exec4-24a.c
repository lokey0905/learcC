#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mathx(int x)
{
	x=3 * x + 105;
	return x;
}
int main(void)
{
	int ix;
	while (1) {
		printf("�п�J�Ʀr:");
		scanf("%d", &ix);
		if (!ix) break;
		ix=mathx(ix);		/*�I�s XPrint �禡,�]�w id���޼� */
		printf("mathx�^�ǭ�:%d\n",ix);
	}
	system("pause"); return(0);
}
