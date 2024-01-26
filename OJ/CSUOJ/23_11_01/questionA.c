//问题 A: 金币
/*
    题目描述
    国王将金币作为工资，发放给忠诚的骑士。
    第一天，骑士收到一枚金币；
    之后两天（第二天和第三天），每天收到两枚金币；
    之后三天（第四、五、六天），每天收到三枚金币；
    之后四天（第七、八、九、十天），每天收到四枚金币……；

    请计算在前K天里，骑士一共获得了多少金币。

    输入
    输入文件只有1行，包含一个正整数K，表示发放金币的天数。
    输出
    输出文件只有1行，包含一个正整数，即骑士收到的金币数。

    样例输入 Copy
    6
    样例输出 Copy
    14
    提示
    对于100%的数据， 1 ≤ K ≤ 10,000。
*/

/*
    1*1 + 2*2 + 3*3 + 4*4 + ...
    1 + 2 + 3 + 4 + ...
*/

#include<stdio.h>

int main(){

    int k;
    scanf("%d", &k);

    int sumMoney = 0;   //總故收到得金幣數量
    int DayMoney[10000] = {0};  //第幾天收到錢的數量

    //建表
    int day = 1;
    for(int i=1; i<=150; i++){

        for(int j=1; j<=i; j++){

            if(day>k)   break;

            DayMoney[day] = i;
            day++;
        }
        if(day>k)   break;
    }

    //算總和
    for(int i=1; i<=k; i++){

        sumMoney = sumMoney + DayMoney[i];
    }

    printf("%d", sumMoney);

    return 0;
}