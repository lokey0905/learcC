#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main(void) {
	float a,b,c;
	printf("連續輸入三個浮點數:");
	scanf("%f%f%f", &a, &b, &c);
	printf("%.1f %.2f %.3f\n", a,b,c);
	printf("%12.1f\n", a);
	printf("%13.2f\n", b);
	printf("%14.3f\n", c);

	system("pause");
	return(0);
}