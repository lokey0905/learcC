#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0, i, n = 2;
	int iMax = 5; // �w�]�̤j���x�s�Ŷ���
	int *piNum;
	if ((piNum = (int*)malloc(sizeof(int)*iMax)) == NULL) { // �ʺA���o�O����
		printf("�O����Ŷ�����\n"); return(0);
	}
	while (n >= 2) { // �p�� 1 ����, �N�������
		sum = 0; // �N�`�M���k�s
		printf("�@�ݭn�p��h�ֵ��ƭȪ��`�M: "); scanf("%d", &n);
		if (n > iMax) {	// �W�L�ثe���o���̤j�x�s�Ŷ�			
			free(piNum);	// �����񤧫e���o���Ŷ�
			iMax = n;		// �]�w�ثe�ݭn���o�̤j�Ŷ������J�� n ��
			if ((piNum = (int*)malloc(sizeof(int)*iMax)) == NULL) { // �A�����o
				printf("�O����Ŷ�����\n"); return(0);
			}
		}
		for (i = 0; i < n; i++) {
			printf("�п�J��%2d �Ӽƭ�:", i + 1);
			scanf("%d", &piNum[i]); // ��J�� i �����
			sum += piNum[i];   // �p���`�M
		}
		printf("�`�M����%d\n", sum);
	}
	free(piNum);  // ����t�m���O����
	system("pause"); return(0);
}
