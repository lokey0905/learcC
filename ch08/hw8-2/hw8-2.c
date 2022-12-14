#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10		// 定義陣列大小的常數
void NumberGen();	// 原型宣告
int Search(int,int*);	// 原型宣告
int iNum[NUM] = { 0 };	// 宣告全域的一維陣列
void NumberGen() {
	int i;
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	for (i = 0; i < NUM; i++) iNum[i] = 1 + (int)(50 * rand() / RAND_MAX);
}
int Search(int target,int* ret) {
	int i;
	*ret = -1;
	for (i = 0; i < NUM; i++)
		if (iNum[i] == target) *ret = i; // 找到指定的數, 傳回索引值
	//*ret = -1;
	//return(-1); // 沒有找到,傳回 -1
}
int main(void)
{
	int iGuess, ret;
	NumberGen(); // 呼叫函式, 產生陣列 iNum 的內容
	do {
		printf("輸入1-50之間猜測的數: ");
		scanf("%d", &iGuess);
		Search(iGuess,&ret); //呼叫 Search 函式進行搜尋
		if (ret >= 0) printf("輸入的數儲存在陣列第 %d 的位置\n", ret);
		else printf("你輸入的數不存在\n", ret);
	} while (ret == -1); // 當輸入的數找不到時,繼續執行
	system("pause"); return(0);
}
