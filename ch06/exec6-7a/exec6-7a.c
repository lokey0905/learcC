#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int t = 0, r;
	srand((unsigned)time(NULL)); // 設定亂數產生器的起始值
	for (int i = 1; i <= 10; i++) {
		r = rand() % 30+1;
		if (r % 2) r = -1 * r;
		if (i != 1 && r > 0)	printf("+");
		t = r + t;
		printf("%d", r);
		
	}
	printf(" = %d", t);
	system("pause"); return(0);
}
