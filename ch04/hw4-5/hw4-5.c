#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char x;
	while (1) {
		printf("�п�J�r��: ");
		scanf("%c", &x);
		if (x == '0') break;
		else if (x>=97) printf("�A��J���r���O%c\n", x-32);
		else if (x >=65) printf("�A��J���r���O%c\n", x + 32);
		else printf("�A��J�����O�^��r��\n");
	}

	system("pause");
	return(0);
}
