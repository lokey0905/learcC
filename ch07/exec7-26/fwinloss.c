int WinLoss(int c, int p) {	// 引數1為電腦, 引數2為玩家
	if (p == c) return(0);	// 兩個出一樣平手
	if (p == 1) p = 4;		// 這時將玩家剪刀的代碼換成 4
	if (p == c + 1) return(1); // 也就是 p - c = 1, 代表玩家贏
	else return(-1);		// 代表玩家輸
}