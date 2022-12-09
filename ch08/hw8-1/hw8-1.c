#include <stdio.h>
#include <stdlib.h>
/*
double Power(double, int);	// Power �禡���쫬�ŧi
double Factor(int);		// Factor �禡���쫬�ŧi
double dCos(double);	// dCos �禡���쫬�ŧi
*/
double Factor(int n ,double* Sign) { // �p�� n!
	int i;
	double ret = 1.0f;
	for (i = 1; i <= n; i++) ret = ret * (double)i;
	*Sign = ret;
	//return(ret);
}
double Power(double x, int n, double* Sign) { // �p�� x^n
	int i;
	double ret = 1.0f;
	for (i = 1; i <= n; i++) ret = ret * x;
	*Sign = ret;
	//return(ret);
}
double dCos(double angle) {
	int i, Sign = -1; // ����ϥ� Sign = -Sign �i�� Sign �b +1 �P -1 ��������
	double ret = 1.0, powerp, factorp;
	for (i = 2; i <= 16; i += 2) { // �C���֥[ 2, ���B�ȭp��e 8 �����X
		Power(angle, i, &powerp)/ Factor(i, &factorp);
		ret += (double)Sign * powerp / factorp; //�p�� cos ���G���
		Sign = -Sign;
	}
	return(ret);
}
int main(void)
{
	float c = 30;
	printf("Cos(%d) = %f\n", (int)c,dCos(3.1415926 / (180.0/c)));
	system("pause"); return(0);
}
