void ShowMsg(int c, int p, int s) { //引數 c 為電腦, p 為玩家, s 為判斷結果
	printf("  你出"); ShowCPS(p);
	printf(", 電腦出"); ShowCPS(c);
	if (s == -1) printf(", 你輸了!\n");
	else if (s == 0) printf(", 平手!\n");
	else printf(", 你贏了!\n");
}