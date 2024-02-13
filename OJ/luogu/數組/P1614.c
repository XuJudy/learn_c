// P1614 爱与愁的心痛

#include<stdio.h>

int main(){

    int n, m;
    int min = 0;
    int num[5000] = {0};

    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++){

        scanf("%d", &num[i]);
    }

    // 初始化:令第一組為最小值
    for(int i=0; i<m; i++){

        min = min + num[i];
    }

    // 下一組連續的數
    int nowSum = min;

    for(int i=m; i<n; i++){

        // 加尾去頭
        nowSum = nowSum + num[i] - num[i-m];

        if(nowSum<min)  min = nowSum;
    }

    printf("%d", min);

    return 0;
}