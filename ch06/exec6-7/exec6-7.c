#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int t=0,r; /* iCount:�O�� 3 �X�{������ */
	srand((unsigned)time(NULL)); // �]�w�üƲ��;����_�l��
	for (int i = 1; i <= 10; i++) {
		r = rand() % 30;
		t = r + t;
		printf("%d", r);
		if(i!=10)	printf(" + ");
	}
	printf(" = %d", t);
	system("pause"); return(0);
}
