#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[3][3] = { 0 }, b[3][3] = { 0 }, c[3][3] = { 0 };
	int *pia;
	pia = &a[0][0];
	for (int i = 0;i < 3;i++) {
		*(pia + 3 * i + i) = 1;
		*(*(b + i) + i) = 1;
		*(c[i] + i) = 1;
	}
	printf("�}�C A �����e\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 3;k++) printf("%3d%", a[i][k]);
		printf("\n");
	}

	printf("�}�C B �����e\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 3;k++) printf("%3d%", b[i][k]);
		printf("\n");
	}

	printf("�}�C C �����e\n");
	for (int i = 0;i < 3;i++) {
		for (int k = 0;k < 3;k++) printf("%3d%", c[i][k]);
		printf("\n");
	}


	system("pause"); return (0);
}