//1018: 22-数组-1-修墙壁
/*
    题目描述
    有一天，小南在家里的墙上发现有个洞，洞的形状是1*1*m(米)的长方体。
    小南从邻居那借来n块木块和一个锯子，木块的形状也是1*1*x(米)的长方体。
    小南打算用这些木块来补好墙壁，如果木块太长，可以用锯子锯掉多余的部分。 
    现在，小南知道了n块木块每块的规格，他想知道借来的木块是否能够补好墙壁，如果能补好，需要的最少的木块数是多少呢？
    
    输入
    每个测试文件包含多组测试用例，测试用例以"0"作为结尾标志。
    每组测试数据包含两行，第一行输入两个整数m（1≤m≤105）和n（0≤n≤1000），分别表示洞的长度和木块的个数。第二行有n个正整数，分别代表n块木块的长度x米。
    输出
    对每组测试用例，输出一个整数，代表最少需要木块数。
    如果不能用已有的木块修补好墙壁，则输出impossible。每个结果占一行。
    
    样例输入 Copy
    5 3
    3 2 1
    5 2
    2 1
    0
    样例输出 Copy
    2
    impossible
*/

#include<stdio.h>

void change(int list[], int n){ //交換函數(表格, 需交換的最小項)

    int tmp = list[n];
    list[n] = list[n+1];
    list[n+1] = tmp;
}

void sort(int list[], int n){   //排序函數(表格, 總表格數)

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){

            if(list[j]<list[j+1]){

                change(list, j);
            }
        }
    }
}

int main(){

    int m, n;   //洞的长度和木块的个数

    while(scanf("%d%d", &m, &n)!=EOF){

        int len[1000] = {0};    //每根木塊的長度
        int sum = 0;    //現有木塊的總長度
        int cost = 0;   //所需耗費的木塊

        if(m==0)    break;

        for(int i=0; i<n; i++){

            scanf("%d", &len[i]);

            sum = sum + len[i]; //計算總長度
        }

        if(sum<m)   //總長度不夠則impossible
            printf("impossible\n");

        else{   //長度足夠

            sort(len, n);   //先排序(大的在前)

            //m每減掉一個木塊長，則所用木塊加一，直至m被扣完
            while(m>0){

                m = m - len[cost];
                cost++;
            }

            printf("%d\n", cost);
        }
    }

    return 0;
}