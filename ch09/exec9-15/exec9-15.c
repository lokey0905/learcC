#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product {
	char pName[20];
	char pID[10];
	int sales[4];
	float fAve;
} stu1 = { "PC","P01",1234,2214, 6492,1234 }, stu2 = { "���q","P02",1782,3291,2781,5321 }, stu3 = { "���",	"P03"   ,6289	,6519  ,5210   ,2213 };

void printinfo(struct product stu) {
	stu.fAve = (stu.sales[0] + stu.sales[1] + stu.sales[2] + stu.sales[3]) / 4.0f;
	printf("------�b��Ƥ�  �e-------\n");
	printf("%s�������P�q��%8.2f\n",stu.pName,stu.fAve);
	strcpy(stu.pName, "�ӤH�q��"); stu.sales[0] = 2000;
	printf("------�b��Ƥ�  ��-------\n");
	printf("%s�������P�q��%8.2f\n", stu.pName, stu.fAve);
}

int main(void) {
	struct product prd[3] = { {"PC","P01",1234,2211,3213,4213},
								{"NB","P02",1233,8212,1279,2130},
								{"PH","P030",2267,3287,1290,3250} };
	char ch;
	printinfo(prd[0]);
	/*stu4 = stu1;  // �N cake1 �����������e���w��(�ƻs) cake2
	printf("��J�´˪L�J�|���ӫ~�s��: ");
	scanf("%s", &stu4.pID);  // �N�r��"�´˪L",�ƻs�� cake2.cName ��
	printf("��J�Ĥ@�u�P�q: "); scanf("%d", &stu4.sales[0]);
	//fflush(stdin); // �M����J�w�İϪ����e
	//ch = getchar();
	printf("��J�´˪L�J�|���O�s����: "); gets(&cake2.cExpirDate);
	printf("%s�J�|���ӫ~�s��: %4d ��� %3d�� �O�s���� %s\n"
		, cake2.cName, cake2.iSerialNo, cake2.iPrice, cake2.cExpirDate);
		//printf("��J���~�W��:%s \n", stu4.pName);
	for (int i = 0;i < 3;i++) {
		printf("��J���~�W��:"); scanf("%s", &prd[i].pName);
		printf("��J���~�s�X:"); scanf("%s", &prd[i].pID);
		printf("�Ĥ@�u�P�q:"); scanf("%d", &prd[i].sales[0]);
		printf("�ĤG�u�P�q:"); scanf("%d", &prd[i].sales[1]);
		printf("�ĤT�u�P�q:"); scanf("%d", &prd[i].sales[2]);
		printf("�ĥ|�u�P�q:"); scanf("%d", &prd[i].sales[3]);
		prd[i].fAve = (prd[i].sales[0] + prd[i].sales[1] + prd[i].sales[2] + prd[i].sales[3]) / 4.0f; // �p�⥭��
		//printf("%s �������P�q��%5.2f\n", stu3.pName, stu3.fAve);
	}
	for (int i = 0;i < 3;i++) {
		printf("%s �������P�q��%5.2f\n", prd[i].pName, prd[i].fAve);
	}*/
	system("pause"); return(0);
}
