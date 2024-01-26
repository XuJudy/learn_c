// 题四、逢七必过游戏
/*
	逢七必过游戏是家庭聚会、朋友聚餐经常玩的游戏，任意一人开始轮流报数，数字从1开始凡是遇到任何7的倍数和带7的数字都要说过。
	现在有五个人玩这个游戏，要求从1数到100. 你站在第x个位置（x在1~5之间）。请说出你每次报的内容。
*/

// 题四、逢七必过游戏

#include<stdio.h>

int Game7(int x){

    for(int i=x; i<=100; i=i+5){
    
        int flag = 0;
        int tmp = i;

        if(i%7==0)  flag = 1;   // 7的倍數
        else{   // 有數字7

            while(tmp>0){

                if(tmp%10==7){

                    flag = 1;
                    break;
                }

                tmp = tmp/10;
            }
        
        }
        
        if(flag)
            printf("過 ");
        else
            printf("%d ", i);
    }
}

int main(){

    Game7(5);

    return 0;
}