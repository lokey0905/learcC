#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STR_C "��妨�Z: "
#define STR_M "�ƾǦ��Z: "
#define STR_E "�^�妨�Z: "

int main() {
	float fChi , fMath , fEng, fTotal, fAve;
	printf("��J%s", STR_C);
	scanf("%f", &fChi);
	printf("��J%s", STR_M);
	scanf("%f", &fMath);
	printf("��J%s", STR_E);
	scanf("%f", &fEng);
	printf("====================\n");
	printf("%14s%6.2f\n", STR_C, fChi);
	printf("%14s%6.2f\n", STR_M, fMath);
	printf("%14s%6.2f\n", STR_E, fEng);

	fTotal = fChi + fMath + fEng;
	fAve = fTotal / 3.0f;

	printf("====================\n");
	printf("%14s%6.2f\n", "�`���Z: ", fTotal);
	printf("%14s%6.2f\n", "�������Z: ", fAve);
}

