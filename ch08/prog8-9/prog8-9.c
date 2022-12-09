#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0, i, n = 2;
	int iMax = 5; // 預設最大的儲存空間數
	int *piNum;
	if ((piNum = (int*)malloc(sizeof(int)*iMax)) == NULL) { // 動態取得記憶體
		printf("記憶體空間不足\n"); return(0);
	}
	while (n >= 2) { // 小於 1 筆時, 就停止執行
		sum = 0; // 將總和先歸零
		printf("共需要計算多少筆數值的總和: "); scanf("%d", &n);
		if (n > iMax) {	// 超過目前取得的最大儲存空間			
			free(piNum);	// 先釋放之前取得的空間
			iMax = n;		// 設定目前需要取得最大空間為剛輸入的 n 值
			if ((piNum = (int*)malloc(sizeof(int)*iMax)) == NULL) { // 再次取得
				printf("記憶體空間不足\n"); return(0);
			}
		}
		for (i = 0; i < n; i++) {
			printf("請輸入第%2d 個數值:", i + 1);
			scanf("%d", &piNum[i]); // 輸入第 i 筆資料
			sum += piNum[i];   // 計算總和
		}
		printf("總和等於%d\n", sum);
	}
	free(piNum);  // 釋放配置的記憶體
	system("pause"); return(0);
}
