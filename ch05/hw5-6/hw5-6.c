#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int x = 0, y = 0, a100 = 0, a99 = 0, a89 = 0, a79 = 0, a69 = 0, a59 = 0, total = 0;
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	
	for (int i = 1;i < 501;i++) {
		y = ((float)rand() / RAND_MAX)*100; 
		printf("第%d位同學:%d\n",i,y);
		
		total = total + y;
		if (y == 100) a100++;
		else if (y >= 90) a99++;
		else if (y >= 80) a89++;
		else if (y >= 70) a79++;
		else if (y >= 60) a69++;
		else a59++;
	}
	printf("  100分共有%4d 位同學\n", a100);
	printf("99~90分共有%4d 位同學\n", a99);
	printf("89~80分共有%4d 位同學\n", a89);
	printf("79~70分共有%4d 位同學\n", a79);
	printf("69~60分共有%4d 位同學\n", a69);
	printf("59~~0分共有%4d 位同學\n", a59);
	printf("共有%4d筆成績，總成績:%5d，平均成績%5.2f\n", 500, total, (float)total / 500);
	system("pause");
	return 0;
}