#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("輸入一個大於 2 的數: "); scanf("%d", &iP);
	/* ix 從 2 開始, iFacotr 為 0 */
	//for (ix = 2, iFactor = 0; ix*ix <= iP && (iFactor == 0); ix++)
		if (!(iP%ix)) iFactor = 1; /* 發現因數, 設定 iFactor 內容為 1 即可 */
	if (iFactor == 0) printf("%d 是質數\n", iP);
	else printf("%d 不是質數\n", iP);
	system("pause"); return(0);
}
