#include <stdio.h>
#include <stdlib.h>
enum month { January, February, March, April, May, June, July, August, September, October, November, December } mon;
int main(void)
{
	
	char cChiName[][10] = { "一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
	char cEngName[][10] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("英文       中文    \n");
	for (mon = January; mon <= December; mon++) // 輸出一週七天的中英文名稱
		printf("%-10s %s  \n", cEngName[mon], cChiName[mon]);
	
	system("pause"); return(0);
}
