#include<stdio.h>

void isPrime(int buff[], int n){

    buff[1] = 2;
    buff[2] = 3;
    buff[3] = 5;
    buff[4] = 7;
    buff[5] = 11;

    int countPrime = 5; //目前已有質數的數量
    int testPrime = 13; //下一個測試之數
    int flag = 0;

    while(testPrime<=n){

        for(int i=1; i<=countPrime; i++){

            if(testPrime%buff[i]==0){
                
                flag = 1;
                break;
            }
        }

        if(flag==0){

            countPrime++;
            buff[countPrime] = testPrime;
        }

        testPrime = testPrime + 2;
    }
}

int main(){

    int n = 50000;
    int prime[50000] = {0};

    isPrime(prime, n);

    while(scanf("%d", &n)!=EOF){

        int max;    //目前最大質數

        for(int i=1; i<50000; i++){ //用質數表的質數去排查會比較快

            if(n%prime[i]==0){
                
                max = n/prime[i]; //紀錄目前最大之質數
                break;
            }
        }

        printf("%d\n", max);
    }

    return 0;
}