//P5707 【深基2.例12】上学迟到
#include<stdio.h>
#include<math.h>

int main(){

    double s, v;   //距離,速率
    int min, time;
    int hr = 0;
    int all = 8*60 + 24*60;

    scanf("%d %d", &s, &v);

    time = ceil(s/v)+10;    //ceil()向上取整
    time = all - time;  //剩下時間

    if(time>=24*60){    //當天出發

        time = time - 24*60;
    }

    //轉換成x小時y分鐘
    while (time>=60){

        hr++;
        time = time - 60;
    }

    min = time;

    if(hr<10 && min<10)   printf("0%d:0%d", hr, min);
    else if(hr < 10)    printf("0%d:%d", hr, min);
    else if(min < 10)   printf("%d:0%d", hr, min);
    else    printf("%d:%d", hr, min); 

    return 0;
}