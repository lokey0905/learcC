#include <stdio.h>
#include <stdlib.h>
int main()
{
	char String[10] = "Dragon";
	char *pString = "Dragon";
	char cWord[4][10] = { "Apple","Orange","Banana","Melon" };
	char *pcWord[4] = { "Apple","Orange","Banana","Melon" };
	int i;
	printf("sizeof:%2d strlen:%2d %s\n", sizeof(cWord[0]), strlen(cWord[0]), cWord[0]);
	printf("起始位址─ cWord: %p  pcWord: %p\n", cWord, pcWord[0]);
	String[0] = 'X'; cWord[0][0] = 'X'; // 更改字串內的第一個字元
										//	pString[0] = 'X'; pcWord[0][0] = 'X';
	system("pause"); return(0);
}
