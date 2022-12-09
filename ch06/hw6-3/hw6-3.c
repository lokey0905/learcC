#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int A[10] = { 0 }; /*砞﹚皚﹍*/
	int i, j, min, t;
	srand((unsigned)time(NULL));
	printf("ユ传玡 ");
	for (j = 0; j < 10; j++) {
		A[j] = rand() % 1000;
		printf("%4d", A[j]);
	}
	//printf("\n\n");
	printf("\nユ传 ");
	for (i = 0; i < 9; i++) {
		min = i; /*安砞ヘ玡程计琌A[min] */
		for (j = i + 1; j < 10; j++)
			if (A[min] > A[j]) min = j; // 癘程计ま
		//printf("i=%d,j=%d,min=%d", i, j, min);
		//for (j = 0; j < 6; j++) printf("%4d", A[j]);
		t = A[min]; A[min] = A[i]; A[i] = t;  // 戈ユ传
		//for (j = 0; j < 10; j++) printf("%4d", A[j]);
		//printf("\n");
	}
	for (j = 0; j < 10; j++) printf("%4d", A[j]);
	system("pause"); return(0);
}
