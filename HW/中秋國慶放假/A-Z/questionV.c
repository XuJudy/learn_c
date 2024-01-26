//问题 V: 22-循环-1-跳台阶
/*
    key. 巴斯卡三角形
    
    1: 1 = 2^0
    2: 1+1=2 = 2^1
    3: 1+2+1=4 = 2^2
    4: 1+3+3+1=8 = 2^3
    5: 1+4+6+4+1=16 = 2^4
*/
#include<stdio.h>

int main(){

    int t;

    while(scanf("%d", &t)!=EOF){

        int n;

        for(int i=0; i<t; i++){
            
            int sum = 1;    //sum初始化

            scanf("%d", &n);

            for(int j=1; j<n; j++){ //乘(n-1)次的2

                sum = sum * 2;
            }

            printf("%d\n", sum);
        }
    }

    return 0;
}