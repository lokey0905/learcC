#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time 函式 */

int main(void)
{
	int iPWin, iCWin, ret;
	int iPlayer, iComp; // 玩家與電腦的出拳狀態
	iPWin = iCWin = 0; // 設定電腦與玩家目前都沒有人贏 
	srand((unsigned)time(NULL)); // 設定亂數產生的起點, 執行一次即可
	while ((iPWin <= 2) && (iCWin <= 2))
	{
		iComp = rand() % 3 + 1; // 以 rand 取得亂數, 再轉成1,2,3 成為電腦的出拳狀態
		printf("1:剪刀, 2:石頭, 3:布. 你出的是: "); scanf("%d", &iPlayer);
		if (iPlayer >= 1 && iPlayer <= 3) {	// 避免使用者輸入錯誤
			ret = WinLoss(iComp, iPlayer);	// 呼叫 WinLoss 函式判斷輸贏
			ShowMsg(iComp, iPlayer, ret);	// 顯示出拳訊息
			if (ret == 1) iPWin++;		// 根據輸贏加總次數
			else if (ret == -1) iCWin++;
			printf("目前為止你贏 %d 次, 電腦贏 %d 次\n", iPWin, iCWin);
		}
		else {
			printf("你出錯了,請重出!\n");
			fflush(stdin);
		}
	}
	if (iPWin == 3) printf("恭喜!你贏電腦嘍!\n");
	else printf("這次輸了沒關係,下次繼續努力!\n");
	system("pause"); return(0);
}