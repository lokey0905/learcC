#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct product
{
	char pname[20];
	int pid;
	int num;
};

int main(void)
{
	FILE* pfile; // �ŧi���V�ɮת����c����
	struct product pro = {""};
	//char cStr[20];	  // �s��Ū�����r��
	int iNum = 0;  // �p��^��r�����Ӽ� 
	if ((pfile = fopen("Itemlist.txt", "r")) == NULL) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("�ɮ׵L�k�}��"); system("pause"); return(0);
	}
	printf("�~�W   ���	�ƶq �`��\n");
	while (!feof(pfile)) {	// �P�_�O�_Ū���ɮק�
		if (fscanf(pfile, "%s %d %d", &pro.pname, &pro.pid, &pro.num) != EOF)
		{
			
			printf("%4s   %4d  %4d %4d\n", pro.pname, pro.pid, pro.num, pro.pid * pro.num);
			iNum += pro.pid * pro.num;
		}
	}
	printf("%4s   %4s  %4s %4d\n", "","", "", iNum);
	//printf("story.txt �@�]�t%3d �ӭ^���r\n", iNum);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}