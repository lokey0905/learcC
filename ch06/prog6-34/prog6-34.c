#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, k;
	int iMax, total = 0;
	int Item[2][3][4] = { 0 };
	srand((unsigned)time(NULL));
	for (i = 0; i < 2; i++) // �ܼ� i �t�d�Ĥ@����
		for (j = 0; j < 3; j++) // �ܼ� j �ĤG����
			for (k = 0; k < 4; k++) // �ܼ� k �ĤT����
				Item[i][j][k] = rand() % 100;
	iMax = Item[0][0][0];
	for (i = 0; i < 2; i++) {
		printf("�� %d ��3x4�G���}�C\n", i + 1);
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				printf("%3d ", Item[i][j][k]); // ��X�}�C�����e
				total += Item[i][j][k]; // �Ҧ��}�C�����ƶi��[�`
				if (iMax < Item[i][j][k]) iMax = Item[i][j][k]; // �D�̤j��
			}
			printf("\n");//�C�@�C���@��
		}
	}
	printf("\n  �`�M�� = %4d\n", total);
	printf("�̤j�Ȭ� = %4d\n", iMax);
	system("pause"); return 0;
}