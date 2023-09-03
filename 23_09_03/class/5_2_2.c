//100以內的素數
#include<stdio.h>

int main(){

    int num;

    for(int i=2; i<100; i++){

        num = 1;

        for(int j=2; j<i; j++){
            if(i%j == 0){   //2進不了循環 num=1
                num++;
                break;      //只要被整除一次 num!=1
            }
        }

        if(num == 1){
            printf("%d ", i);
        }
    }

    return 0;
}