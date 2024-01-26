//问题 B: 22-数组-3-字符串问题
/*
    题目描述
    从一个由n个小写字母组成的字符串中，快速统计出第i个位置的字母在前i个位置中出现了几次。
    例如：字符串aabbacabc，1号位置字母a出现1次，2号位置字母a出现2次,3号位置字母b出现1次。

    输入
    单样例。第一行输入两个整数n与m（1≤n,m≤106）。
    第二行输入n个小写字母组成的字符串。接下来的m行，每行一个正整数，表示要统计的位置i。
    输出
    输出共m行，每行一个正整数，表示第i个位置的字母在前i个位置中出现的次数。

    样例输入 Copy
    3 3
    abc
    1
    2
    3
    样例输出 Copy
    1
    1
    1
*/

#include<stdio.h>
#define N 1000000

int main(){
    
	int n, m;
	scanf("%d%d", &n, &m);

	char z[N] = {0};
	scanf("%s", z);

	int a[N] = {0};
	int b[N] = {0};
	
	for (int i=0; i<n; i++){

		a[z[i] - 'a']++;
		b[i] = a[z[i] - 'a'];
	}

	for (int i=0; i<m; i++){

		int k;
		scanf("%d", &k);
		printf("%d\n", b[k - 1]);
	}
	return 0;
}