#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a[10], b[10],t=1000,at,bt;
	srand((unsigned)time(NULL));
	printf("陣列A的內容: ");
	for (int i = 0;i < 10;i++) {
		a[i] = rand() % 1000 + 1;
		printf("%4d", a[i]);
	}
	printf("\n陣列B的內容: ");
	for (int i = 0;i < 10;i++) {
		b[i] = rand() % 1000 + 1;
		printf("%4d", b[i]);
	}
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (a[i] - b[j] < t && a[i] - b[j]>0 || a[i] - b[j] > t && a[i] - b[j] < 0 || !(a[i] - b[j])) {
				t = a[i] - b[j] > 0 ? a[i] - b[j] : (a[i] - b[j]) * -1;
				at = i;bt = j;
			}
		}
	}
	printf("\nabs<A[%d]-B[%d]> = abs<%d - %d> = %d\n", at,bt,a[at],b[bt],t);

	system("pause"); return(0);
}
