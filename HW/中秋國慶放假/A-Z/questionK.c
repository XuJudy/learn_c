//问题 K: 22-循环-1-质因数分解
#include<stdio.h>

//製質數表
void PrimeNumber(int buff[], int n){

    //先初始化五個
    buff[0]=2;
    buff[1]=3;
    buff[2]=5;
    buff[3]=7;
    buff[4]=11;

    int i;
    int countPrime=5;   //目前質數的數量
    int testNumber=13;  //下個要測驗的數

    while(countPrime<n){

        //利用已有的質數表進行判斷
        for(i=0; i<countPrime; i++){  

            //有被至少一個質數整除則非質數
            if(testNumber%buff[i]==0)   break;
        }

        //通過測試
        if(i==countPrime){

            buff[countPrime] = testNumber;   //質數表已知的質數加一
            countPrime++;
        }

        //偶數跳過不測，只需考慮奇數
        testNumber = testNumber + 2;
    }
}

int main(){

    int n = 50000;
    int Primebuff[50000] = {0};

    PrimeNumber(Primebuff, n);  //質數表

    while(scanf("%d", &n)!=EOF){

        for(int i=0; i<50000; i++){ //開始查表

            if(n%Primebuff[i]==0){

                printf("%d\n", n/Primebuff[i]); //取最大質數
                break;  //跳出for
            }
        }
    }

    return 0;
}