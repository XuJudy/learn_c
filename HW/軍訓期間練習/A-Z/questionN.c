//22-数组-2-众数问题
/*
    问题描述：
    给定含有n个元素的多重集合S，每个元素在S中出现的次数称为该元素的重数，其中重数最大的元素称为众数。
    例如，S={1，2，2，2，3，5}，则S的众数是2，其重数为3。
    编程任务：
    对于给定的由n 个正整数组成的多重集合S，编程计算S 的众数及其重数。

    输入
    单样例。第1行输入集合S中元素个数n(1≤n≤50000)；接下来的n 行中，每行输入一个正整数x（0≤x≤105）。
    输出
    输出结果包括2行，第1行给出众数，第2行是该众数的重数。(如果有多个众数，只输出最小的那个)

    样例输入
    6
    1
    2
    2
    2
    3
    5
    样例输出
    2
    3
*/

#include<stdio.h>

int main(){

    int n, x;
    int max_sum, max_id;    //眾數的數量、眾數
    int max = 0;    //集合中的最大值
    int S[1000] = {0};  //列表初始化

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &x);

        S[x]++; //在該數字中加一

        if(x>max)   max = x;    //判斷是否為目前集合中的最大數
    }

    max_sum = S[0];
    max_id = 0;

    for(int i=1; i<=max; i++){  //排查至集合最大數即可

        if(S[i]>max_sum){
            
            max_sum = S[i];
            max_id = i;
        }
    }

    printf("%d\n%d", max_id, max_sum);

    return 0;
}