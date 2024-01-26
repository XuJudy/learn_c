//问题 AI: 浩南有选择困难症（20分）
/*
    题目描述
    浩南想国庆出游。他挑选了一系列城市，并且调查了去这些城市旅游的费用。
    出于节约经费考虑，他想挑选出花费最少的一个城市去旅行。但是如果这样的城市有多个，那么浩南就会陷入选择困难症。

    输入
    第一行为一个不大于100的正整数n，表示浩南调查的城市个数。
    第二行为空格分隔的n个不超过100的正整数，分别表示这n个城市的旅游费用。依序给这些城市编号1-n。
    输出
    如果费用最少的城市有多个，那么浩南陷入选择困难症，请输出Fail。否则请输出浩南会去的城市的编号。

    样例输入 Copy
    2
    7 4
    样例输出 Copy
    2
*/

#include<stdio.h>

int main(){

    int n, money;
    int flag = 0;
    int city[100] = {0};

    scanf("%d", &n);

    for(int i=1; i<=n; i++){ //建表

        scanf("%d", &money);

        city[i] = money;
    }

    int min = city[1];
    int id = 1;

    for(int i=2; i<=n; i++){

        if(city[i]<min){    //成本更低

            min = city[i];
            id = i;
        }
    }

    for(int i=1; i<=n; i++){

        if(city[i]==min){  //成本最低的數量

            flag++;
        }
    }

    if(flag>=2)    printf("Fail\n");
    else    printf("%d\n", id);

    return 0;
}