#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct GoodsInfo {
	char cName[20];
	int  iPrice;
	int  iSerialNo;
	char cExpirDate[6];
};
int main(void)
{
	struct GoodsInfo cake1 = { "���Ԧ�Ĭ",35,1216,"01/21" }, // �ŧi�ɳ]�w��l��
		coffee = { "���K�@��",50,1128,"03/12" }, cake2;
	char ch;
	
	cake2 = cake1;  // �N cake1 �����������e���w��(�ƻs) cake2
    strcpy(cake2.cName, "�´˪L"); // �N�r��"�´˪L",�ƻs�� cake2.cName ��
	printf("��J�´˪L�J�|���ӫ~�s��: "); scanf("%d", &cake2.iSerialNo);
	//fflush(stdin); // �M����J�w�İϪ����e
	ch = getchar();
	printf("��J�´˪L�J�|���O�s����: "); gets(&cake2.cExpirDate);
	printf("%s�J�|���ӫ~�s��: %4d ��� %3d�� �O�s���� %s\n"
		, cake2.cName, cake2.iSerialNo, cake2.iPrice, cake2.cExpirDate);
	
	system("pause"); return(0);
}
