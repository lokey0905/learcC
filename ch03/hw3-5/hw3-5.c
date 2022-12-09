#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STR_C "國文成績: "
#define STR_M "數學成績: "
#define STR_E "英文成績: "

int main() {
	float fChi , fMath , fEng, fTotal, fAve;
	printf("輸入%s", STR_C);
	scanf("%f", &fChi);
	printf("輸入%s", STR_M);
	scanf("%f", &fMath);
	printf("輸入%s", STR_E);
	scanf("%f", &fEng);
	printf("====================\n");
	printf("%14s%6.2f\n", STR_C, fChi);
	printf("%14s%6.2f\n", STR_M, fMath);
	printf("%14s%6.2f\n", STR_E, fEng);

	fTotal = fChi + fMath + fEng;
	fAve = fTotal / 3.0f;

	printf("====================\n");
	printf("%14s%6.2f\n", "總成績: ", fTotal);
	printf("%14s%6.2f\n", "平均成績: ", fAve);
}

