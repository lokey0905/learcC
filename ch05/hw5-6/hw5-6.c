#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int x = 0, y = 0, a100 = 0, a99 = 0, a89 = 0, a79 = 0, a69 = 0, a59 = 0, total = 0;
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	
	for (int i = 1;i < 501;i++) {
		y = ((float)rand() / RAND_MAX)*100; 
		printf("��%d��P��:%d\n",i,y);
		
		total = total + y;
		if (y == 100) a100++;
		else if (y >= 90) a99++;
		else if (y >= 80) a89++;
		else if (y >= 70) a79++;
		else if (y >= 60) a69++;
		else a59++;
	}
	printf("  100���@��%4d ��P��\n", a100);
	printf("99~90���@��%4d ��P��\n", a99);
	printf("89~80���@��%4d ��P��\n", a89);
	printf("79~70���@��%4d ��P��\n", a79);
	printf("69~60���@��%4d ��P��\n", a69);
	printf("59~~0���@��%4d ��P��\n", a59);
	printf("�@��%4d�����Z�A�`���Z:%5d�A�������Z%5.2f\n", 500, total, (float)total / 500);
	system("pause");
	return 0;
}