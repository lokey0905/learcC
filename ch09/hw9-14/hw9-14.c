#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentInfo {
	char  cName[10];//學生姓名
	int	  ichi;    //出生年
	int	ieng;
	int imath;
	float fave;
};

void sortbyave(struct StudentInfo stu[6]) {
	int t;/*
	for (int i = 0; i < 5; i++) {
		printf("%6s%6d%6d%6d%6.2f\n", stu[i].cName, stu[i].ichi, stu[i].ieng, stu[i].imath, stu[i].fave);
	}*/
	for (int i = 0;i < 5;i++) {
		for (int k = i;k < 5;k++) {
			if (stu[k + 1].fave > stu[k].fave) {
				stu[5] = stu[k];
				stu[k] = stu[k+1];
				stu[k + 1] = stu[5];
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%6s%6d%6d%6d%6.2f\n", stu[i].cName, stu[i].ichi, stu[i].ieng, stu[i].imath, stu[i].fave);
	}
}

int main(void)
{
	int i;

	struct StudentInfo stu[6] = {	"Mary",87,93,79,0,
									"Frank",88,74,71,0,
									"Brown",77,87,83,0,
									"Frank",88,74,91,0,
									"Alison",62,71,81,0};
	
	for (i = 0; i < 5; i++)
		stu[i].fave = (stu[i].ichi + stu[i].ieng + stu[i].imath) / 3.0f;
		
	sortbyave(stu);
	system("pause"); return(0);
}

