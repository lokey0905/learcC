#include<stdio.h>
#include<stdlib.h>

int main() {
	int a1,a2,a3;
	float t1,t2,t3;
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	t1 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a1 = (int)(t1 * 900 + 100); /* 變成 100 到 1000 之間的數值 */
	t2 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a2 = (int)(t2 * 900 + 100); /* 變成 100 到 1000 之間的數值 */
	t3 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a3 = (int)(t3 * 900 + 100); /* 變成 100 到 1000 之間的數值 */
	printf("隨機產生三個數: a1=%d,a2=%d,a3=%d\n最小數為:", a1, a2, a3);
	if (a1 < a2 && a1 < a3) printf("%d\n", a1);
	else if (a2 < a1 && a2 < a3)	printf("%d\n", a2);
	else printf("%d\n", a3);
	system("pause");
	return 0;
}