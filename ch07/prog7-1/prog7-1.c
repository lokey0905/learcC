#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
void ScoreSorting()
{ // �u���禡�[�c,�S���禡���e
	printf("ScoreSorting �Q�I�s\n");
}
void ScoreInput()
{ // �u���禡�[�c,�S���禡���e
	printf("ScoreInput �Q�I�s\n");
}
void ScoreOutput()
{ // �u���禡�[�c,�S���禡���e
	printf("ScoreOutput �Q�I�s\n");
}
*/

int main(void)
{
	int iChoice;
	do {
		printf("��� 1:��J���Z 2:��X���Z 3:��������\n");
		scanf("%d", &iChoice);
		if (iChoice == 1) ScoreInput();// �I�s ScoreInput �禡
		else if (iChoice == 2) ScoreOutput();
		else if (iChoice == 3) printf("�{������\n");;
	} while (iChoice != 3);
	system("pause"); return (0);
}
