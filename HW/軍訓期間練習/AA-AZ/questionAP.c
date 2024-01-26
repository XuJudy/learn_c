//问题 AP: 20级期末机试1-评委打分（10分）
/*
    题目描述
    中南CC君近期组织中南大学大学生歌唱比赛，准备邀请五位评委根据参赛选手的表现打分。
    选手得分规则：去掉一个最高分和一个最低分，然后计算平均得分。
    他需要设计一个程序，能根据每位选手的平均分从高到低进行排序。你能帮帮他吗？

    输入
    多组样例。每组测试样例的第一行n，表示有n个参赛选手，n<1000；
    下面的n行：每行包括参赛选手的编号（由数字组成的长度为3的字符串），及5位评委给的分数（整型），中间由空格分开。
    输出
    根据选手的平均分，从高到低的顺序依次输出每个选手的编号和平均分（四舍五入，保留两位小数）。注意如果某些选手的平均分成绩相同，则根据其编号，从小到大排序。
    
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

int getmax(int list[]){

    int max = list[1];
    for(int i=2; i<=5; i++){
        if(list[i]>max) max = list[i];
    }

    return max;
}

int getmin(int list[]){

    int min = list[1];
    for(int i=2; i<=5; i++){
        if(list[i]<min) min = list[i];
    }

    return min;
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int max, min;
        int id[1000];   //編號
        int score[10];  //成績
        double averge[1000] = {0};   //平均
    
        for(int i=1; i<=n; i++){    //建表

            scanf("%d", &id[i]);

            for(int j=1; j<=5; j++){

                scanf("%d", &score[j]);
            }

            max = getmax(score);
            min = getmin(score);

            for(int j=1; j<=5; j++){

                averge[i] = averge[i] + score[j];
            }

            averge[i] = averge[i] - max - min;
        }

        for(int i=1; i<=n; i++){    //名次排序(降序)

            for(int j=1; j<n; j++){

                if(averge[j]<averge[j+1]){

                    int tmp, tmp_id;

                    //交換平均分
                    tmp = averge[j];
                    averge[j] = averge[j+1];
                    averge[j+1] = tmp;

                    //交換編號
                    tmp_id = id[j];
                    id[j] = id[j+1];
                    id[j+1] = tmp_id;
                }
            }
        }

        for(int i=1; i<=n; i++){    //輸出

            printf("%03d %.2f\n", id[i], averge[i]/3.0);
        } 
    }

    return 0;
}