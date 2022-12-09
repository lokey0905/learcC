#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main(void) {
	int attack, y;
	int defence;
	printf("輸入攻擊力:\n");
	y = scanf("%d", &attack);
	printf("輸入防禦力:\n");
	scanf("%d", &defence); //波浪弧代表 warning  scanf需要接回傳值，不接回傳值也可以運行

	/*error: 在編譯時，輸出錯誤訊息，警告使用者某些錯誤，並且不會真的進行編譯，在巨集處理階段就會停止。
	  warning:在編譯時，輸出警告訊息，警告使用者某些注意事項，但是不會中止編譯，仍然會繼續編譯出目的檔。*/

	printf("對怪物攻擊力為:%d\n", attack * 3 - defence * 2);
	system("pause");
	//return(0);
}