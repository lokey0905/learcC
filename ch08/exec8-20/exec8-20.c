#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	char *ptr[3] = { "Tom","lily","Jame" };
	for (i = 0;i < 3;i++)	puts(ptr[i]);
	printf("\n");
	for (i = 0;i < 3;i++)	printf("第%d位:%s\n", i, ptr[i]);
	printf("\n");
	for (i = 0;i < 3;i++)	printf("第%d位:%s\n", i, *(ptr+i));
	system("pause"); return (0);
}