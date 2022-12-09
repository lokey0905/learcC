#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, s;
	int iAtoZ[26] = { 0 }; /* 初始值為 0 */
	int iVowel[5] = { 97,101,105,111,117 };
	char ch; /* 接收輸入的字元 */
	printf("輸入一段英文句子,以#代表結尾\n");
	while ((ch = getchar()) != '#')
	{
		if (ch >= 'A' && ch <= 'Z')  /* 大寫 A 到 Z */
			iAtoZ[ch - 65]++; /* A 的 ASCII 編碼為 65 */
		else if (ch >= 'a' && ch <= 'z') /* 小寫 a 到 z */
			iAtoZ[ch - 97]++; /* a 的 ASCII 編碼為 65 */
	}
	printf("輸出內容 1:(全部), 2:(母音): ");
	scanf("%d", &s);
	if (s == 1) {
		for (i = 0; i < 26; i++) /* 檢查每一個字母的出現次數 */
			if (iAtoZ[i] != 0) printf("%c 出現 %2d 次\n", i + 97, iAtoZ[i]);
	}
	else {
		for (i = 0; i < 5; i++) /* 僅輸出5個母音的次數 */
			printf("%c 出現 %2d 次\n", iVowel[i], iAtoZ[iVowel[i] - 97]);
	}
	system("pause"); return(0);
}
