#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10		// �w�q�}�C�j�p���`��
void NumberGen();	// �쫬�ŧi
int Search(int,int*);	// �쫬�ŧi
int iNum[NUM] = { 0 };	// �ŧi���쪺�@���}�C
void NumberGen() {
	int i;
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	for (i = 0; i < NUM; i++) iNum[i] = 1 + (int)(50 * rand() / RAND_MAX);
}
int Search(int target,int* ret) {
	int i;
	*ret = -1;
	for (i = 0; i < NUM; i++)
		if (iNum[i] == target) *ret = i; // �����w����, �Ǧ^���ޭ�
	//*ret = -1;
	//return(-1); // �S�����,�Ǧ^ -1
}
int main(void)
{
	int iGuess, ret;
	NumberGen(); // �I�s�禡, ���Ͱ}�C iNum �����e
	do {
		printf("��J1-50�����q������: ");
		scanf("%d", &iGuess);
		Search(iGuess,&ret); //�I�s Search �禡�i��j�M
		if (ret >= 0) printf("��J�����x�s�b�}�C�� %d ����m\n", ret);
		else printf("�A��J���Ƥ��s�b\n", ret);
	} while (ret == -1); // ���J���Ƨ䤣���,�~�����
	system("pause"); return(0);
}
