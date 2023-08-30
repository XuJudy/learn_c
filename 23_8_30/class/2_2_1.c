//計算時間差
#include<stdio.h>

int main(){

    int hr1, min1, time1;
    int hr2, min2, time2;

    scanf("%d %d", &hr1, &min1);
    scanf("%d %d", &hr2, &min2);

    time1 = 60*hr1 + min1;
    time2 = 60*hr2 + min2;

    int time = time2 - time1;

    printf("時間差是%d小時%d分。", time/60, time%60);

    return 0;
}