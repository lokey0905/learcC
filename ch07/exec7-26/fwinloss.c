int WinLoss(int c, int p) {	// �޼�1���q��, �޼�2�����a
	if (p == c) return(0);	// ��ӥX�@�˥���
	if (p == 1) p = 4;		// �o�ɱN���a�ŤM���N�X���� 4
	if (p == c + 1) return(1); // �]�N�O p - c = 1, �N���aĹ
	else return(-1);		// �N���a��
}