#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
	int i, j;
	printf("  *"); /* ��X�Ĥ@�檺*/
	for (i = 9; i >= 1; i--) printf("%3d", i);
	printf("\n");
	for (i = 9; i >= 1; i--) {
		printf("%3d", i);
		for (j = 9; j >= 1; j--) {
			printf("%3d", i * j); /*��X i*j */
			Sleep(50); /* �Ȱ� 0.05 �� */
		}
		printf("\n");
		Sleep(200); /* �Ȱ� 0.2 �� */
	}
	system("pause"); return(0);
}