#include <stdio.h>
#include <stdlib.h>
enum month { January, February, March, April, May, June, July, August, September, October, November, December } mon;
int main(void)
{
	
	char cChiName[][10] = { "�@��","�G��","�T��","�|��","����","����","�C��","�K��","�E��","�Q��","�Q�@��","�Q�G��"};
	char cEngName[][10] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("�^��       ����    \n");
	for (mon = January; mon <= December; mon++) // ��X�@�g�C�Ѫ����^��W��
		printf("%-10s %s  \n", cEngName[mon], cChiName[mon]);
	
	system("pause"); return(0);
}
