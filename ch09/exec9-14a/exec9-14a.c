#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct BasicInfo {
	char cName[10]; //�m�W
	int  iAge;		//�X�ͦ~
	char mail[30];
	char sex[2];
};

struct StudentInfo {
	struct BasicInfo Info; //�m�W�P�X�ͦ~
	int iID;
	int iGrade;
};

struct teacherInfo {
	struct BasicInfo Info; //�m�W�P�X�ͦ~
	int iID;
	int iGrade;
};

int main(void)
{
	
	struct StudentInfo stu1 = { "John" ,2001,"gmail","M", 1010101, 5};
	struct teacherInfo stu2 = { "Mary" ,1997,"amail","F", 6969669, 55};
	printf("�ǥͩm�W: %s �X�ͦ~: %3d\n", stu1.Info.cName, stu1.Info.iAge);
	printf("�Ǹ�: %8d �~��: %2d\n", stu1.iID, stu1.iGrade);
	printf("mail: %s �ʧO: %s\n\n", stu1.Info.mail, stu1.Info.sex);

	printf("�Ѯv�m�W: %s �X�ͦ~: %3d\n", stu2.Info.cName, stu2.Info.iAge);
	printf("�丹: T%d �~��: %2d\n", stu2.iID, stu2.iGrade);
	printf("mail: %s �ʧO: %s\n", stu2.Info.mail, stu2.Info.sex);
	
	system("pause"); return(0);
}