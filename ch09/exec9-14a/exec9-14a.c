#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct BasicInfo {
	char cName[10]; //姓名
	int  iAge;		//出生年
	char mail[30];
	char sex[2];
};

struct StudentInfo {
	struct BasicInfo Info; //姓名與出生年
	int iID;
	int iGrade;
};

struct teacherInfo {
	struct BasicInfo Info; //姓名與出生年
	int iID;
	int iGrade;
};

int main(void)
{
	
	struct StudentInfo stu1 = { "John" ,2001,"gmail","M", 1010101, 5};
	struct teacherInfo stu2 = { "Mary" ,1997,"amail","F", 6969669, 55};
	printf("學生姓名: %s 出生年: %3d\n", stu1.Info.cName, stu1.Info.iAge);
	printf("學號: %8d 年級: %2d\n", stu1.iID, stu1.iGrade);
	printf("mail: %s 性別: %s\n\n", stu1.Info.mail, stu1.Info.sex);

	printf("老師姓名: %s 出生年: %3d\n", stu2.Info.cName, stu2.Info.iAge);
	printf("邊號: T%d 年資: %2d\n", stu2.iID, stu2.iGrade);
	printf("mail: %s 性別: %s\n", stu2.Info.mail, stu2.Info.sex);
	
	system("pause"); return(0);
}