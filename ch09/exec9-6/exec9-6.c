#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product {
	char pName[20];
	char pID[10];
	int first;
	int sec;
	int third;
	int fourth;
	float fAve;
} stu1 = { "PC","P01",1234,2214, 6492,1234 }, stu2 = { "���q","P02",1782,3291,2781,5321 }, stu3 = { "���",	"P03"   ,6289	,6519  ,5210   ,2213 };

int main(void)	{
	struct product stu4;
	char ch;

	stu4 = stu1;  // �N cake1 �����������e���w��(�ƻs) cake2
	printf("��J�´˪L�J�|���ӫ~�s��: ");
	scanf("%s", &stu4.pID);  // �N�r��"�´˪L",�ƻs�� cake2.cName ��
	printf("��J�Ĥ@�u�P�q: "); scanf("%d", &stu4.first);
	//fflush(stdin); // �M����J�w�İϪ����e
	//ch = getchar();
	/*printf("��J�´˪L�J�|���O�s����: "); gets(&cake2.cExpirDate);
	printf("%s�J�|���ӫ~�s��: %4d ��� %3d�� �O�s���� %s\n"
		, cake2.cName, cake2.iSerialNo, cake2.iPrice, cake2.cExpirDate);*/
	//printf("��J���~�W��:%s \n", stu4.pName);
	printf("��J���~�s�X:%s \n", stu4.pID);
	printf("�Ĥ@�u�P�q:%d \n", stu4.first);
	printf("�ĤG�u�P�q:%d \n", stu4.sec);
	printf("�ĤT�u�P�q:%d \n", stu4.third);
	printf("�ĥ|�u�P�q:%d \n", stu4.fourth);
	system("pause"); return(0);
}
