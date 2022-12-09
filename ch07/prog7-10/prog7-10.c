#include <stdio.h>
#include <stdlib.h>
int IsPrime(int);
int main(void)
{
	int i;
	printf("1 到 10000 間的質數有:\n");
	for (i = 1; i <= 10000; i++)
		if (IsPrime(i)) printf("%5d", i); // 只要回傳值為1, 就是質數, 所以輸出
	printf("\n");
	system("pause"); return 0;
}
int IsPrime(int iP)
{
	int ix = 2; // ix 從 2 開始
	if (iP <= 1) return(0); // 避開小於(含) 1 以下的數
	while (ix*ix <= iP) // 只需要執行到根號(iP)即可
	{
		if (!(iP%ix)) return(0);// 發現因數, 這個數不是質數
		ix++; // ix 遞增 1
	}
	return(1); // 過程都未發現因數, 所以這個數為質數
}

