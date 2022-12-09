#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix,iy=0;
	printf("叫块计:"); scanf("%d", &ix);
	if (ix % 2 == 0) {/* 緇 0 ボ赣计案计 */
		printf("块琌案计\n");
		iy = ix + 1;
		printf("赣案计+1琌%d\n",iy);
	}
	else { /* ぃ琌緇 0, ê碞琌緇 1, ボ赣计计 */
		printf("块琌计\n");
		iy = ix + 2;
		printf("赣计+2琌%d\n",iy);
	}
	system("pause"); return 0;
}
