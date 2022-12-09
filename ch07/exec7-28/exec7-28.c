#include <stdio.h>
#include <stdlib.h>
long Sum(long n) /* 定義計算階乘的函式*/
{
	long ret; // 儲存階乘的結果,預設為 1
	if (n == 1) return(1); // 終止呼叫的條件, 假設呼叫時引數內容一定 >=1
	ret = n + Sum(n - 1);
	return(ret);
}

int main(void)
{
	long n=5;
	printf("%d",Sum(n));


	system("pause"); return(0);
}
