#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, s;
	int iAtoZ[26] = { 0 }; /* ��l�Ȭ� 0 */
	int iVowel[5] = { 97,101,105,111,117 };
	char ch; /* ������J���r�� */
	printf("��J�@�q�^��y�l,�H#�N����\n");
	while ((ch = getchar()) != '#')
	{
		if (ch >= 'A' && ch <= 'Z')  /* �j�g A �� Z */
			iAtoZ[ch - 65]++; /* A �� ASCII �s�X�� 65 */
		else if (ch >= 'a' && ch <= 'z') /* �p�g a �� z */
			iAtoZ[ch - 97]++; /* a �� ASCII �s�X�� 65 */
	}
	printf("��X���e 1:(����), 2:(����): ");
	scanf("%d", &s);
	if (s == 1) {
		for (i = 0; i < 26; i++) /* �ˬd�C�@�Ӧr�����X�{���� */
			if (iAtoZ[i] != 0) printf("%c �X�{ %2d ��\n", i + 97, iAtoZ[i]);
	}
	else {
		for (i = 0; i < 5; i++) /* �ȿ�X5�ӥ��������� */
			printf("%c �X�{ %2d ��\n", iVowel[i], iAtoZ[iVowel[i] - 97]);
	}
	system("pause"); return(0);
}
