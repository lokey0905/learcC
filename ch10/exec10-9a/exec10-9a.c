#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product
{
	char pname[20];
	char pid[12];
	char num[5];
};

int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	struct product pro={"","",""};
	char cStr[20];	  // �s��Ū�����r��
	//int iNum = 0;  // �p��^��r�����Ӽ� 
	if ((pfile = fopen("..\\exec10-9\\product.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("�ɮ׵L�k�}��"); system("pause"); return(0);
	}
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
		if (fscanf(pfile, "%s %s %s", &pro.pname,&pro.pid,&pro.num) != EOF)
		{
			//iNum++; // �CŪ�J�@�Ӧr��N�[1
			printf("%s %s  %s\n", pro.pname, pro.pid, pro.num);
		}
	}
	//printf("story.txt �@�]�t%3d �ӭ^���r\n", iNum);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}