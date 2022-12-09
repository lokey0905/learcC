#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int i(int);
float f(float);
double d(double);

int main(void)
{
	int y=-3;
	float fa = -3.0f;
	double da = 3.0;
	printf("-3的絕對值為 %d\n",i(y));
	printf("-3的絕對值為 %15.10f\n",f(fa));
	printf("-3的絕對值為 %15.10f\n",d(da));
	
	system("pause"); return (0);
}

int i(int x) {
	return (x < 0 ? -x : x);
}
float f(float x) {
	return(x < 0 ? -x : x);
}
double d(double x) {
	return(x < 0 ? -x : x);
}

