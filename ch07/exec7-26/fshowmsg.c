void ShowMsg(int c, int p, int s) { //�޼� c ���q��, p �����a, s ���P�_���G
	printf("  �A�X"); ShowCPS(p);
	printf(", �q���X"); ShowCPS(c);
	if (s == -1) printf(", �A��F!\n");
	else if (s == 0) printf(", ����!\n");
	else printf(", �AĹ�F!\n");
}