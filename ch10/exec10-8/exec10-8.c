#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct StuInfo {
	int	 iID;
	char cName[10];
	char cBirthday[10];
};
int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	char cStr[20];	  // �s��Ū�����r��
	int iNum = 0, i = 0;  // �p��^��r�����Ӽ� 
	struct StuInfo stu[5];
	if ((pfile = fopen("..\\prog10-7\\stuinfo.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("story.txt �ɮ׵L�k�}��"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
			if (fscanf(pfile, "%d %s %s", &stu[i].iID, stu[i].cName, stu[i].cBirthday) != EOF)
		{
			iNum++; // �CŪ�J�@�Ӧr��N�[1
			//printf("��%d�r: %s\n", iNum, cStr);
		}
	}
	iNum = i; printf("�Ǹ�   �m�W    �ͤ�\n");
	for (i = 0; i < iNum; i++)
		printf("%d %s %s\n", stu[i].iID, stu[i].cName, stu[i].cBirthday);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}