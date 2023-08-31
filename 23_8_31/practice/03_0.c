//03-0. 超速判断(10)
#include<stdio.h>

int main(){

    int speed;

    for(int i=0; i<5; i++){

        scanf("%d", &speed);

        if(speed>60){
            printf("Speed: %d - Speeding\n", speed);
        }
        else{
            printf("Speed: %d - OK\n", speed);
        }
    }

    return 0;
}