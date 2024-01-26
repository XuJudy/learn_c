// P5743 【深基7.习8】猴子吃桃

#include<stdio.h>

int main(){

    int sum = 1;
    int day;

    scanf("%d", &day);

    while(day>1){

        sum = (sum+1) * 2;
        day--;
    }

    printf("%d\n", sum);

    return 0;
}