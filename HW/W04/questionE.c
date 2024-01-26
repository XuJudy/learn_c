//问题 E: 三、时光倒流
#include<stdio.h>

int main(){

    int hr, min, sec;
    int chage_sec, now_sec, after_sec;  //改變的秒數、現在時間的秒數、改變後時間秒數

    while(scanf("%d%d%d%d", &hr, &min, &sec, &chage_sec)!=EOF){

        now_sec = (60*hr+min)*60+sec;   //將現在時間轉換成秒
        after_sec = now_sec - chage_sec;    //算出改變後的時間(以秒數表示)

        while(after_sec<0) after_sec = 60*60*24 + after_sec;
        /*
            秒數為負表示改變後的時間非當天
            以一天60*60*24秒將為負的時間轉為正

            因為改變後的時間可能為兩天前或更久
            故須使用while而非if
         */

        sec = after_sec%60;
        after_sec = after_sec/60;
        min = after_sec%60;
        hr = after_sec/60;

        printf("%02d:%02d:%02d\n", hr, min, sec);
    }    

    return 0;
}