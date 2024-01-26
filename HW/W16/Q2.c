// 题二、孪生素数
/*
    找出范围[m,n]内的所有孪生素数，并将其保存在二维数组a中
    返回找到的孪生素数数量
*/

#include<stdio.h>

int twin(int m, int n, int a[][2]){

    int cnt = 0;

    for(int i=m; i<=n-2; i++){

        int flag = 0;   // 防止2進不了循環

        for(int j=2; j<i; j++){

            if(i%j==0 || (i+2)%j==0){ // 非素數

                flag = 0;
                break;
            }
            else    flag = 1;   // 是素數
        }

        if(flag){

            a[cnt][0] = i;
            a[cnt][1] = i+2;
            cnt++;
        }
    }

    return cnt;
}

int main(){

    int list[10000][2];

    printf("%d\n", twin(1, 100, list));

    return 0;
}