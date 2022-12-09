#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int age;
	printf("叫块: "); scanf("%d", &age);
	if (age >= 65)		/* iGrade 单 90*/
		printf("ρ\n");  /* 痷, 块挡狦*/
	else if (age >= 40)	/* 安, 耞 grade 单 80 琌痷*/
		printf("い\n");	/* 痷, 块挡狦*/
	else if (age >= 30)	/* 安, 耞grade 单 70 琌痷*/
		printf("Ё\n");  /* 痷, 块挡狦*/
	else if (age >= 20)	/* 安, 耞grade 单60 琌痷*/
		printf("淮\n");	/* 痷, 块挡狦*/
	else if (age >= 10)	/* 安, 耞grade 单60 琌痷*/
		printf("ぶ\n");
	else if (age >= 1)	/* 安, 耞grade 单60 琌痷*/
		printf("\n");
	system("pause"); return 0;
}
