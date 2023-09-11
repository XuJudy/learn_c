//產生隨機數取平均
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    double num, avg;    //隨機數、平均數
    double sum = 0.0;   //總和

    printf("隨機數:");

    for(int i=0; i<3; i++){     //產生三個隨機數
        num = 0 + 1.0*rand() / RAND_MAX * (1-0);
        sum = sum + num;

        printf(" %.4f", num);   //輸出隨機數
    }

    avg = sum / 3;  //算平均
    
    printf("\n平均值為%.4f", avg);

    return 0;
}