#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time �禡 */

int main(void)
{
	int iPWin, iCWin, ret;
	int iPlayer, iComp; // ���a�P�q�����X�����A
	iPWin = iCWin = 0; // �]�w�q���P���a�ثe���S���HĹ 
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	while ((iPWin <= 2) && (iCWin <= 2))
	{
		iComp = rand() % 3 + 1; // �H rand ���o�ü�, �A�ন1,2,3 �����q�����X�����A
		printf("1:�ŤM, 2:���Y, 3:��. �A�X���O: "); scanf("%d", &iPlayer);
		if (iPlayer >= 1 && iPlayer <= 3) {	// �קK�ϥΪ̿�J���~
			ret = WinLoss(iComp, iPlayer);	// �I�s WinLoss �禡�P�_��Ĺ
			ShowMsg(iComp, iPlayer, ret);	// ��ܥX���T��
			if (ret == 1) iPWin++;		// �ھڿ�Ĺ�[�`����
			else if (ret == -1) iCWin++;
			printf("�ثe����AĹ %d ��, �q��Ĺ %d ��\n", iPWin, iCWin);
		}
		else {
			printf("�A�X���F,�Э��X!\n");
			fflush(stdin);
		}
	}
	if (iPWin == 3) printf("����!�AĹ�q����!\n");
	else printf("�o����F�S���Y,�U���~��V�O!\n");
	system("pause"); return(0);
}