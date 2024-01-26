//问题 BQ: 开心的小明：有趣的游戏
/*
    题目描述
    今天是一个阳光明媚的日子，小明和他的小伙伴们正在草地上玩一个有趣的游戏：
    草地上放置着n堆卡牌，将它们合并成一堆需要的最小费用是多少？谁能又快又准地计算出所需的最小费用，谁就获胜。
    合并卡牌的规则是这样的：
        1.每次只能合并任意2堆卡牌。
        2.每次合并2堆卡牌，所需的费用是这2堆卡牌数量的总和。
        3.总共的费用是每次费用的总和。

    此时的小明并没有想到好的解法，于是他向聪明的你求助，你能帮助他吗？
    
    输入
    输入数据第1行有1个正整数 n（1≤n≤100000），表示有 n堆卡牌。
    第2行有 n个整数， 分别表示每堆卡牌的数量（取值范围为[1,1000]） 。
    输出
    数据输出为一行， 表示所需的最小总费用。
    
    样例输入
    7
    45 13 12 16 9 5 22
    样例输出
    313

    1. 45 13 12 16 14 22    -> 14
    2. 45 25 16 14 22       -> 25
    3. 45 25 30 22          -> 30
    4. 45 47 30             -> 47
    5. 75 47                -> 75
    6. 122                  -> 122
    --------------------------------
    7. sum                  -> 313
*/
/*  時間超限    */

#include<stdio.h>

void sort(int list[], int sum){ //排序(降序)

    for(int j=0; j<sum; j++){
        
        for(int i=1; i<sum; i++){

            if(list[i]>list[i-1]){

                int tmp = list[i-1];
                list[i-1] = list[i];
                list[i] = tmp;
            }
        }
    }
}

int main(){

    int n;
    int list[100000] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){ //建表

        scanf("%d", &list[i]);
    }

    int sum = 0;    //總和(所求)

    while(n>1){ 

        sort(list, n);  //先進行降序排列
        list[n-2] = list[n-2] + list[n-1];  //最後面(最小)的兩堆合併
        sum = sum + list[n-2];
        n--;    //少一堆
    }

    printf("%d", sum);

    return 0;
}