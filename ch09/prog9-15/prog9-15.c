#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentInfo {
	char  cName[10];//�ǥͩm�W
	int	  iYear;    //�X�ͦ~
};
void PrintInfo(struct StudentInfo); // �禡�쫬�ŧi

int main(void)
{
	
	struct StudentInfo stuX = { "John",1990 };
	PrintInfo(stuX); // �I�s PrintInfo ��X�ܼƤ��e
	printf("%s �X�ͩ� %4d �~\n", stuX.cName, stuX.iYear);
	
	system("pause"); return(0);
}

void PrintInfo(struct StudentInfo stu)
{
	printf("%s �X�ͩ� %4d �~\n", stu.cName, stu.iYear);
	strcpy(stu.cName, "Mary"); stu.iYear = 1989;  // ���s�]�w�ܼƪ����e
}