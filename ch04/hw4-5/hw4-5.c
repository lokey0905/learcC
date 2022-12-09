#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char x;
	while (1) {
		printf("請輸入字母: ");
		scanf("%c", &x);
		if (x == '0') break;
		else if (x>=97) printf("你輸入的字母是%c\n", x-32);
		else if (x >=65) printf("你輸入的字母是%c\n", x + 32);
		else printf("你輸入的不是英文字母\n");
	}

	system("pause");
	return(0);
}
