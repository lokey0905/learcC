#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix, iy, iz, iMax;
	printf("�п�J�T�Ӽ�, �����d�@�Ӫť�: ");
	scanf("%d%d%d", &ix, &iy, &iz);
	iMax = ix < iy ? ix : iy; /* ��� ix �P iy, �]�w���j�Ƶ� iMax */
	iMax = iMax < iz ? iMax : iz;
	printf("�̤p�Ƭ�: %d\n", iMax);
	system("pause"); return 0;
}
