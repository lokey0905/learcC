#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int age;
	printf("�п�J�~��: "); scanf("%d", &age);
	if (age >= 65)		/* iGrade �Ȥj�󵥩� 90*/
		printf("�Ѧ~�H\n");  /* ���u, ��X���G*/
	else if (age >= 40)	/* ����, �A�P�_ grade �j�󵥩� 80 �O�_���u*/
		printf("���~�H\n");	/* ���u, ��X���G*/
	else if (age >= 30)	/* ����, �A�P�_grade �j�󵥩� 70 �O�_���u*/
		printf("���~�H\n");  /* ���u, ��X���G*/
	else if (age >= 20)	/* ����, �A�P�_grade �j�󵥩�60 �O�_���u*/
		printf("�~���H\n");	/* ���u, ��X���G*/
	else if (age >= 10)	/* ����, �A�P�_grade �j�󵥩�60 �O�_���u*/
		printf("�֦~\n");
	else if (age >= 1)	/* ����, �A�P�_grade �j�󵥩�60 �O�_���u*/
		printf("�p��\n");
	system("pause"); return 0;
}
