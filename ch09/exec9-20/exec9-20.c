#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct school {
	char nName[20];
	char sType[20];
	int  number;	
};
struct com {
	char cName[20];
	char cType[20];
	//int  number;
};

struct invoices {
	char customer[20];	// �m�W
	char data[12];
	int  iType;		// �����O, 1 ��ܦѮv, 2 �N��ǥ�
	union {
		struct school s0bject;
		struct com c0bject;
	};
}inv;

int main(void)
{
	int iOpt;
	while (1) {
		do {
			printf("�п�ܸ�ƧO 1(�Ǯ�) 2(���q) 0(���}): "); scanf("%d", &iOpt);
		} while (iOpt != 1 && iOpt != 2 && iOpt != 0);
		if (!iOpt) break;
		inv.iType = iOpt;
		if (iOpt == 1) { // �������Ѯv
			printf("�п�J�Ǯյo�����Y: "); scanf("%s", &inv.customer);
			printf("�п�J�Ǯյo�����: "); scanf("%s", &inv.data);
			printf("�п�J�ǮզW��:   "); scanf("%s", &inv.s0bject.nName);
			printf("�п�J�Ǯթʽ�:   "); scanf("%s", &inv.s0bject.sType);
			printf("�п�J�ǮդH��:   "); scanf("%d", &inv.s0bject.number);
		}
		else {  // �������ǥ�
			printf("�п�J���q�o�����Y: "); scanf("%s", &inv.customer);
			printf("�п�J���q�o�����: "); scanf("%s", &inv.data);
			printf("�п�J���q�W��:   "); scanf("%s", &inv.c0bject.cName);
			printf("�п�J���q�ʽ�:   "); scanf("%s", &inv.c0bject.cType);
			//printf("�п�J�ǮդH��:   "); scanf("%d", &inv.s0bject.number);
		}/*
		if (person.iType == 1)
			printf("%s �Ѯv���s��: %6d �A�Ȧ~��: %2d\n", person.cName, person.tea.iTID, person.tea.iYears);
		else
			printf("�ǥ� %s ���Ǹ�: %6d �ثe%2d �~��\n", person.cName, person.stu.iSID, person.stu.iDegree);*/
	}
	system("pause"); return(0);
}
