// P1085 [NOIP2004 普及组] 不高兴的津津

#include<stdio.h>

int main(){

    int unhappy = 0;
    int day;
    int time_class, time_afterclass;

    for(int i=1; i<=7; i++){

        scanf("%d%d", &time_class, &time_afterclass);

        if(time_class+time_afterclass>8 && time_class+time_afterclass-8>unhappy){

            day = i;
            unhappy = time_class + time_afterclass - 8;
        }
    }

    printf("%d\n", day);

    return 0;
}