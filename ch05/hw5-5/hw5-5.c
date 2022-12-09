#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int x=0,y=0,a100=0,a99=0,a89=0,a79=0,a69=0,a59=0,total=0;
	while (1) {
		printf("輸入國文成績(999表示結束): ");
		scanf("%d", &x);
		if (x == 999) break;
		y++;
		total = total + x;
		if (x == 100) a100++;
		else if (x >= 90) a99++;
		else if (x >= 80) a89++;
		else if (x >= 70) a79++;
		else if (x >= 60) a69++;
		else a59++;
	}
	printf("  100分共有%4d 位同學\n",a100);
	printf("99~90分共有%4d 位同學\n",a99);
	printf("89~80分共有%4d 位同學\n",a89);
	printf("79~70分共有%4d 位同學\n",a79);
	printf("69~60分共有%4d 位同學\n",a69);
	printf("59~~0分共有%4d 位同學\n",a59);
	printf("共有%4d筆成績，總成績:%5d，平均成績%5.2f\n",y,total,(float)total/y);
	system("pause");
	return 0;
}