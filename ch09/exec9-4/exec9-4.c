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
};
int main(void)
{
	struct product stu; // �ŧi���c�ܼ�stu
	printf("��J���~�W��: "); gets(stu.pName);  // ��J�m�W
	printf("��J���~�s�X: "); gets(stu.pID);
	printf("�Ĥ@�u�P�q: "); scanf("%d", &stu.first); // ��J��妨�Z
	printf("�ĤG�u�P�q: "); scanf("%d", &stu.sec); // ��J�^�妨�Z
	printf("�ĤT�u�P�q: "); scanf("%d", &stu.third); // ��J�ƾǦ��Z
	printf("�ĥ|�u�P�q: "); scanf("%d", &stu.fourth);
	stu.fAve = (stu.first + stu.sec + stu.third+ stu.fourth) / 4.0f; // �p�⥭��
	printf("%s �������P�q��%5.2f\n", stu.pName, stu.fAve);
	system("pause"); return(0);
}
