#include <stdio.h>
#include <stdlib.h>
#define ROW 2	// �w�q�}�C���C�Ӽ�
#define COL 3	// �w�q�}�C����Ӽ�
int main(void)
{
	int i, j;
	int A[ROW][COL] = { { 3,2,4 },{ 6,1,5 } };	// �ŧi�}�CA �ó]�w���
	int B[ROW][COL] = { { 2,-1,3 },{ 3,-4,-2 } };  // �ŧi�}�CB �ó]�w���
	int C[ROW][COL] = { 0 };  	// �ŧi�}�CC �ó]�w��Ȭ�0
	int *piA, *piB, *piC;
	piA = A[0]; piB = B[0]; piC = C[0];

	system("pause"); return 0;
}
