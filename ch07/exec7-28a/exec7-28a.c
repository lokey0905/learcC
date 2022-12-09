#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long Sum(long n,long d,long a1) /* 定義計算階乘的函式*/
{
	long ret; // 儲存階乘的結果,預設為 1
	if (n == 1) return(a1); // 終止呼叫的條件, 假設呼叫時引數內容一定 >=1
	ret = a1+(n-1)*d + Sum(n - 1, d, a1);

	//ret= 
	return(ret);
}

int main(void)
{
	long n=1,d,a1,sum;

	while (1) {
		printf("n:");
		scanf("%d", &n);
		if (!n) break;
		printf("d:");
		scanf("%d", &d);
		printf("a1:");
		scanf("%d", &a1);

		printf("%d\n\n", Sum(n, d, a1));
	}
	system("pause"); return(0);
}
