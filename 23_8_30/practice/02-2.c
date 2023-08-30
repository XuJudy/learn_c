//02-2. 然后是几点(15)
#include<stdio.h>

int main(){

    int i, j;   //i:當時時間 j:流逝時間(min)
    int  hr, min;

    scanf("%d %d", &i, &j);

    min = i % 100;
    hr = (i-min) / 100;
    //printf("hr=%d min=%d\n", hr, min);

    min = min + j;
    //printf("hr=%d min=%d\n", hr, min);

    while(min >= 60){   //if只會跑一次!

        hr++;
        min = min - 60;

        //printf("hr=%d min=%d\n", hr, min);
    }

    printf("%d", hr * 100 + min);

    return 0;
}