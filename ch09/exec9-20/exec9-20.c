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
	char customer[20];	// 姓名
	char data[12];
	int  iType;		// 身份別, 1 表示老師, 2 代表學生
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
			printf("請選擇資料別 1(學校) 2(公司) 0(離開): "); scanf("%d", &iOpt);
		} while (iOpt != 1 && iOpt != 2 && iOpt != 0);
		if (!iOpt) break;
		inv.iType = iOpt;
		if (iOpt == 1) { // 身份為老師
			printf("請輸入學校發票標頭: "); scanf("%s", &inv.customer);
			printf("請輸入學校發票日期: "); scanf("%s", &inv.data);
			printf("請輸入學校名稱:   "); scanf("%s", &inv.s0bject.nName);
			printf("請輸入學校性質:   "); scanf("%s", &inv.s0bject.sType);
			printf("請輸入學校人數:   "); scanf("%d", &inv.s0bject.number);
		}
		else {  // 身份為學生
			printf("請輸入公司發票標頭: "); scanf("%s", &inv.customer);
			printf("請輸入公司發票日期: "); scanf("%s", &inv.data);
			printf("請輸入公司名稱:   "); scanf("%s", &inv.c0bject.cName);
			printf("請輸入公司性質:   "); scanf("%s", &inv.c0bject.cType);
			//printf("請輸入學校人數:   "); scanf("%d", &inv.s0bject.number);
		}/*
		if (person.iType == 1)
			printf("%s 老師的編號: %6d 服務年資: %2d\n", person.cName, person.tea.iTID, person.tea.iYears);
		else
			printf("學生 %s 的學號: %6d 目前%2d 年級\n", person.cName, person.stu.iSID, person.stu.iDegree);*/
	}
	system("pause"); return(0);
}
