#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x = 12345;
	printf("123456789012345\n");
	printf("%d  //�ϥ�%%d\n", x);
	printf("%+d\n", x);
	printf("%d //�ϥ�0-x,�ܦ��t��\n",0-x);
	printf("% d\n", x);
	printf("%10d\n", x);
	printf("%010d\n", x);
	printf("%10.6d\n", x);
	system("pause");
	return(0);
}