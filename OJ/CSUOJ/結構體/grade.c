//20级期末机试1-评委打分（10分）
/*
    题目描述
    中南CC君近期组织中南大学大学生歌唱比赛，准备邀请五位评委根据参赛选手的表现打分。
    选手得分规则：去掉一个最高分和一个最低分，然后计算平均得分。
    
    输入
    多组样例。
    第一行n，表示有n个参赛选手，n<1000；
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

void chage_double(double list[], int x){

    int tmp = list[x];
    list[x] = list[x+1];
    list[x+1] = tmp;
}

void chage_int(int list[], int x){

    int tmp = list[x];
    list[x] = list[x+1];
    list[x+1] = tmp;
}

int main(){

    int n, num;
    int grade[5] = {0};
    int id[1000] = {0};

    while(scanf("%d", &n)!=EOF){
    
        double sum[1000] = {0};

        for(int i=0; i<n; i++){

            scanf("%d%d%d%d%d%d", &id[i], &grade[0], &grade[1], &grade[2], &grade[3], &grade[4]);

            int min = grade[0];
            int max = grade[0];

            for(int j=1; j<5; j++){

                if(grade[j]<min)    min = grade[j];
                else if(grade[j]>max)   max = grade[j];
            }

            //printf("min:%d max:%d ", min, max);

            for(int j=0; j<5; j++){

                sum[i] = sum[i] + grade[j];
            }

            //printf("sum:%d\n", sum[i]);

            sum[i] = sum[i] - min - max;
        }

        for(int i=0; i<n; i++){

            for(int j=0; j<n-i-1; j++){

                if(sum[j]<sum[j+1]){

                    chage_double(sum, j);
                    chage_int(id, j);
                }
                else if(sum[j]==sum[j+1] && id[j]>id[j+1]){

                    chage_int(id, j);
                }
            }
        }

        for(int i=0; i<n; i++){

            printf("%03d %.2f\n", id[i], sum[i]/3.0);
        }

    }

    return 0;
}