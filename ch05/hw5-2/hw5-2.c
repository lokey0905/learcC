#include<stdio.h>
#include<stdlib.h>

int main() {
	int a1,a2,a3;
	float t1,t2,t3;
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	t1 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a1 = (int)(t1 * 900 + 100); /* �ܦ� 100 �� 1000 �������ƭ� */
	t2 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a2 = (int)(t2 * 900 + 100); /* �ܦ� 100 �� 1000 �������ƭ� */
	t3 = (float)rand() / RAND_MAX; /* 0 <= t <= 1 */
	a3 = (int)(t3 * 900 + 100); /* �ܦ� 100 �� 1000 �������ƭ� */
	printf("�H�����ͤT�Ӽ�: a1=%d,a2=%d,a3=%d\n�̤p�Ƭ�:", a1, a2, a3);
	if (a1 < a2 && a1 < a3) printf("%d\n", a1);
	else if (a2 < a1 && a2 < a3)	printf("%d\n", a2);
	else printf("%d\n", a3);
	system("pause");
	return 0;
}