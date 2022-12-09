#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int* ptr, i,sum = 0;
	ptr = (int*)malloc(3*sizeof(int));
	*ptr = 10;
	*(ptr + 1) = 24;
	*(ptr + 2) = 213;
	for (i = 0;i < 3;i++) {
		printf("*ptr+%d=%d\n", i, *(ptr+i));
		sum += *(ptr + i);
	}
	printf("sum: %d\n", sum);
	free(ptr);
	system("pause"); return(0);
}