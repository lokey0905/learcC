#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	for (i = 0;i < 12;i++) {
		if (i % 3) {
			while (1) {
				printf("%d break«e\n", i);
				break;
				printf("%d break«á\n", i);
			}
		}
	}

	system("pause"); return(0);
}
