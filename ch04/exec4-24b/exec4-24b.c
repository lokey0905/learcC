#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mathx(int x, int y)
{
	//x = 3 * x + 105;
	return 10 * x - 8 * y + 10;
}
int main(void)
{
	int ix,y;
	while (1) {
		printf("�п�J�Ʀrx:");
		scanf("%d", &ix);
		printf("�п�J�Ʀry:");
		scanf("%d", &y);
		
		ix = mathx(ix,y);		/*�I�s XPrint �禡,�]�w id���޼� */
		printf("mathx�^�ǭ�:%d\n", ix);
		if (ix<0) break;
	}
	system("pause"); return(0);
}
