#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int iDice[6] = { 0 };
	int i, t; /* t ����l���X�{�I�� */
	srand((unsigned)time(NULL));
	for (i = 1; i <= 100000; i++) { /* ���ƤQ�U�� */
		t = rand() % 6 + 1; /* ���o�X�{���I�� */
		switch (t)
		{
		case 1:
			iDice[0]++; /* �X�{1�I */
			break;
		case 2:
			iDice[1]++; /* �X�{2�I */
			break;
		case 3:
			iDice[2]++; /* �X�{3�I */
			break;
		case 4:
			iDice[3]++; /* �X�{4�I */
			break;
		case 5:
			iDice[4]++; /* �X�{5�I */
			break;
		default:
			iDice[5]++; /* �X�{6�I */
			break;
		}
	}
	for (i = 1; i <= 6; i++) { /* ��X�C�@�ӭ����X�{���ƻP���v */
		printf("%d �I�X�{ %5d ��,", i, iDice[i - 1]);
		printf("���v�� %.3f\n", (float)iDice[i - 1] / 100000);
	}
	system("pause"); return(0);
}
