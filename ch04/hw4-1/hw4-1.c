#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=0, y=0;
	//printf("��J�Ʀrx,y:");
	//scanf("%d %d", &x, &y);
	while (x < 9999) {
		x += 2;
		y = y + x;
	}
	printf("1��10000�����A�Ҧ�2���ƪ��`�M�O: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 3;
		y = y + x;
	}
	printf("1��10000�����A�Ҧ�3���ƪ��`�M�O: %d\n", y);
	x = 0; y = 0;
	while (x < 9999) {
		x += 5;
		y = y + x;
	}
	printf("1��10000�����A�Ҧ�5���ƪ��`�M�O: %d\n", y);
	system("pause");
	return(0);
}
