#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct StudentInfo { // �H typedef ���s�R�W
	char  cName[10];//�ǥͩm�W
	char from[10];
	int	  iYear;    //�X�ͦ~
	char o;
} STUDENTINFO, * PSTUDENTINFO; // *PSTUDENTINFO �N������ܼƫ��O
void PrintInfo(PSTUDENTINFO); // ���P�� void PrintInfo(struct StudentInfo *)
int main(void)
{
	STUDENTINFO stuX = { "John","�x�_",1990,'o' }; // ���P�� struct StudentInfo stuX =...
	//PrintInfo(&stuX); // PrintInfo �H�ǫ��Ф覡��X�ܼƤ��e
	printf("  �m�W:"); scanf("%s", &stuX.cName);
	printf("�X�ͦa:"); scanf("%s", &stuX.from);
	printf("�X�ͦ~:"); scanf("%s", &stuX.iYear);
	printf("  �嫬:"); scanf("%s", &stuX.o);
	printf("\n%s \n�X�ͦa: %s\n�X�ͩ�: %4d �~\n�嫬:%c\n", stuX.cName, stuX.from, stuX.iYear, stuX.o);
	system("pause"); return(0);
}
void PrintInfo(PSTUDENTINFO stu) //���P��void PrintInfo(struct StudentInfo *stu)
{
	printf("%s �X�ͩ� %4d �~\n", stu->cName, stu->iYear);
	strcpy(stu->cName, "Mary"); stu->iYear = 1989;  // ���s�]�w�ܼƪ����e
}
