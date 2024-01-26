// 21级期中机试-最少的笔（20分）
/*
	题目描述
	C商店里有三种笔，价格分别是38元、18元、8元。
	如果消费金额超过68元，就赠送一支8元的笔。一位顾客只送一次，不重复赠送。
	对于给定的金额x元，最少能买回来多少支笔呢？要求尽可能把钱花完（即剩余的钱只能少于8元）。

	输入
	多组样例。每行输入一个样例包括一个正整数x（0<x≤1000）。
	输出
	对于每一个输入的x，输出一个整数表示能买回来的笔的数量。每个输出占一行。

	样例输入 Copy
	10
	50
	200
	样例输出 Copy
	1
	2
	7
*/

#include<stdio.h>

int main() {

	int money;

	while (scanf("%d", &money) != EOF) {

		int sum, sum_8, sum_18, sum_38;

		sum_38 = money/38;
		money = money%38;
		sum_18 = money/18;
		money = money%18;
		sum_8 = money/8;

		sum = sum_38 + sum_18 + sum_8;
		money = sum_38*38 + sum_18*18 + sum_8*8;

		if(money>68)	sum++;

		printf("%d\n", sum);
	}

	return 0;
}