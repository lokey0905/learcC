#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cSize = 'M'; //中杯對應的英文字母,字元以整數輸出
	int iCups = 10;
	float fDiscount = 0.85;
	//printf("資訊工程系\n");

	//printf("%d 的一杯35元\n", cSize);// 給錯輸出格式

	//printf("購買 %d 杯,共 %d 元\n", iCups, 35*iCups); //漏打了一個引數

	//printf("購買 %d 杯,可以打 %1.2f 折\n", iCups, fDiscount); //引數不小心放錯順序

	system("pause");
	return(0);
}