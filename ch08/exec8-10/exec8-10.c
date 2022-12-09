#include <stdio.h>
#include <stdlib.h>
void add20(int*);
int main(void)
{
	int a = 10;
	printf("©I¥sadd20()«e,a=%d\n", a);
	add20(&a);
	printf("©I¥sadd20()«e,a=%d\n", a);
	system("pause"); return(0);
}

void add20(int* pl) {
	*pl = *pl + 20;
}