#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, j, k;
	int iMax, total = 0;
	int Item[2][3][4] = { 0 };
	srand((unsigned)time(NULL));
	for (i = 0; i < 2; i++) // 變數 i 負責第一維度
		for (j = 0; j < 3; j++) // 變數 j 第二維度
			for (k = 0; k < 4; k++) // 變數 k 第三維度
				Item[i][j][k] = rand() % 100;
	iMax = Item[0][0][0];
	for (i = 0; i < 2; i++) {
		printf("第 %d 個3x4二維陣列\n", i + 1);
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				printf("%3d ", Item[i][j][k]); // 輸出陣列的內容
				total += Item[i][j][k]; // 所有陣列中的數進行加總
				if (iMax < Item[i][j][k]) iMax = Item[i][j][k]; // 求最大值
			}
			printf("\n");//每一列換一行
		}
	}
	printf("\n  總和為 = %4d\n", total);
	printf("最大值為 = %4d\n", iMax);
	system("pause"); return 0;
}
