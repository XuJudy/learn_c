// 问题 D: 20级期末机试1-评委打分（10分）
/*
    题目描述
    五位评委根据参赛选手的表现打分。
    选手得分规则：去掉一个最高分和一个最低分，然后计算平均得分。
    需要设计一个程序，能根据每位选手的平均分从高到低进行排序。

    输入
    多组样例。
    每组测试样例的第一行n，表示有n个参赛选手，n<1000；
    下面的n行：每行包括参赛选手的编号（由数字组成的长度为3的字符串），及5位评委给的分数（整型），中间由空格分开。
    输出
    根据选手的平均分，从高到低的顺序依次输出每个选手的编号和平均分（四舍五入，保留两位小数）。
    注意如果某些选手的平均分成绩相同，则根据其编号，从小到大排序。
    
    样例输入
    5
    001 98 95 82 85 90
    002 76 87 90 90 88
    003 90 92 97 95 93
    004 97 88 86 90 92
    010 99 98 97 96 96
    样例输出
    010 97.00
    003 93.33
    001 90.00
    004 90.00
    002 88.33
*/

#include<stdio.h>
#include<string.h>

int p1=8000, p2=4000, p3=2000, p4=1000, p5=850;
struct player{

   char num[5];
   int score[7];
   double ave;
} player[1007];

int main(){

    int n;
    while(scanf("%d", &n)!=EOF){

        memset(player, 0, sizeof(player));
        
        for(int i=1; i<=n; i++){

            scanf("%s", player[i].num);
            
            int sum = 0;
            int max = -1;
            int min = 100;

            for(int j=1; j<=5; j++){

                scanf("%d", &player[i].score[j]);
                
                if(player[i].score[j]>max) max = player[i].score[j];
                if(player[i].score[j]<min) min = player[i].score[j];
                
                sum = sum + player[i].score[j];
            }

            sum = sum - max - min;
            player[i].ave = 1.0*sum/3;
        }

        struct player temp;
        
        for(int i=1; i<n; i++){

            for(int j=i+1; j<=n; j++){

                if(player[i].ave==player[j].ave){

                    if(strcmp(player[i].num,player[j].num)<=0)
                        continue;
                    else{

                        temp = player[i];
                        player[i] = player[j];
                        player[j] = temp;
                    }
                }

                if(player[i].ave<player[j].ave){

                    temp = player[i];
                    player[i] = player[j];
                    player[j] = temp;
                }
            }
        }

        for(int i=1; i<=n; i++){

            printf("%s %.2lf\n", player[i].num, player[i].ave);
        }                                                                                                                                                          
    }
    
    return 0;
}