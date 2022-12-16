#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct product
{
	char name[10];
	int chi;
	int eng;
	int math;
	int tot;
	float ave;
};

int main() {
	FILE *pfile;
	struct product data[5] = {0};
	pfile = fopen("score.txt", "r");
	int i = 0;
	while (!feof(pfile)) {
		fscanf(pfile, "%s %d %d %d",data[i].name, &data[i].chi, &data[i].eng, &data[i].math);
		data[i].tot = data[i].chi + data[i].eng + data[i].math;
		data[i].ave = data[i].tot / 3.0f;
		printf("%5s %4d %4d %4d %4d  %.2f\n", data[i].name, data[i].chi, data[i].eng, data[i].math, data[i].tot, data[i].ave);
		//fputs("%5s %4d %4d %4d %4d  %.1f\n", data.name, data.chi, data.eng, data.math, data.tot, data.ave, pfile);
		i++;
	}
	fclose(pfile);
	pfile = fopen("result.txt", "w");
	for (i = 0;i < 5;i++) {
		fprintf(pfile,"%5s %4d %4d %4d %4d  %.2f\n", data[i].name, data[i].chi, data[i].eng, data[i].math, data[i].tot, data[i].ave);
	}
	fclose(pfile);
	return 0;
}