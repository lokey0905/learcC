#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ia, ib;
	printf("��J��Ӿ��:"); scanf("%d%d", &ia, &ib);
	printf("��J����ӼƭȬO: %d %d\n", ia, ib);
	printf("��J��Ӿ��,�Х�(,)�j�}�ƭ�:"); scanf("%d,%d", &ia, &ib);
	printf("��J����ӼƭȬO: %3d %d\n", ia, ib);
	printf("��J��Ӿ��,�Х�(#)�j�}�ƭ�:"); scanf("%d#%d", &ia, &ib);
	printf("��J����ӼƭȬO: %3d %d\n", ia, ib);
	printf("��J��Ӿ��,�Х�(@)�j�}�ƭ�:"); scanf("%d@%d", &ia, &ib);
	printf("��J����ӼƭȬO: %3d %d\n", ia, ib);
	printf("��J��Ӿ��,�Х�($)�j�}�ƭ�:"); scanf("%d$%d", &ia, &ib);
	printf("��J����ӼƭȬO: %3d %d\n", ia, ib);
	system("pause"); 
	return(0);
}
