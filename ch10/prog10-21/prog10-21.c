#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415;
	int		iArray[] = { 3,5,7 };
	int		i, ifd;
	ifd = _open("number.bin", O_CREAT | O_BINARY | O_RDWR, S_IWRITE);
	if (ifd == -1) {
		printf("�ɮ׶}�ҥ���"); system("pause"); return(0);
	}
	/*
	_write(ifd, &da, sizeof(double));  // �g�J8�Ӧ줸��
	_write(ifd, &fb, sizeof(float));   // �g�J4�Ӧ줸�� 
	_write(ifd, iArray, sizeof(int) * 3);// �g�J12�Ӧ줸��
	_lseek(ifd, 0, SEEK_SET);		 // Ū�g�Y�^���ɮ��Y
	_read(ifd, &da, sizeof(double));   // Ū���ܼ� da �����e
	_read(ifd, &fb, sizeof(float));	  // Ū���ܼ� fb �����e  
	_read(ifd, iArray, sizeof(int) * 3);  // Ū�� iArray �����e
	printf("da = %6.4f\n", da);
	printf("fb = %6.4f\n", fb);
	for (i = 0; i < 3; i++) printf("iArray[%d]=%d\n", i, iArray[i]);
	*/
	_close(ifd); system("pause"); return(0); // �����ɮ�
}
