#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main(void) {
	int attack, y;
	int defence;
	printf("��J�����O:\n");
	y = scanf("%d", &attack);
	printf("��J���m�O:\n");
	scanf("%d", &defence); //�i�����N�� warning  scanf�ݭn���^�ǭȡA�����^�ǭȤ]�i�H�B��

	/*error: �b�sĶ�ɡA��X���~�T���Aĵ�i�ϥΪ̬Y�ǿ��~�A�åB���|�u���i��sĶ�A�b�����B�z���q�N�|����C
	  warning:�b�sĶ�ɡA��Xĵ�i�T���Aĵ�i�ϥΪ̬Y�Ǫ`�N�ƶ��A���O���|����sĶ�A���M�|�~��sĶ�X�ت��ɡC*/

	printf("��Ǫ������O��:%d\n", attack * 3 - defence * 2);
	system("pause");
	//return(0);
}