#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cAsk1[20] = "��J�A���m�W:";
	char cAsk2[20] = "��J�A���Ǹ�:";
	char cName[20];
	char cId[20];
	printf("%s", cAsk1);
	scanf("%s", cName); 	// ��J�m�W
	
	puts(cAsk2);
	scanf(" %s", cId);	// ��J�Ǹ�
	printf("�A���m�W: %s �Ǹ�: %s\n", cName, cId);
	printf("%s", cAsk1);
	scanf("%s", cName); //�A�Ѧr�ꪺ�x�s���e
	system("pause"); return(0);
}
