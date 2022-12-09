#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void alphabet(char *in) {
	if (*in >= 65 && *in <= 90) *in += 32;
	else if (*in >= 97 && *in <= 122) *in -= 32;
}

int main(void)
{
	char* pc, ch, cword[100] = { '\0'};
	int i = 0,ilen;
	printf("輸入一段英文:");
	while ((ch = getchar()) != '\n') {
		alphabet(&ch);
		cword[i] = ch;
		i++;
	}
	printf("%s", cword);
	system("pause"); return(0);
}
