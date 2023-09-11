//函數 求質數和
#include<stdio.h>

int isPrime(int i){     //判斷質數的函數

    int ret = 1;
    
    for(int k=2; k<i-1; k++){

        if(i%k == 0){   //其中有一項被整除就ret=0

            ret = 0;
            break;
        }
    }

    return ret;
}

int main(){

    int m, n;
    int sum = 0;    //質數和
    int cnt = 0;    //質數數量

    scanf("%d %d", &m, &n);

    if(m==1)    m = 2;
    for(int i=m; i<=n; i++){    //開始掃描

        if(isPrime(i)){         //如果ret=1(是質數)

            sum = sum + i;
            cnt ++;         //質數數量加一
        }
    }

    printf("%d %d\n", cnt, sum);

    return 0;
}