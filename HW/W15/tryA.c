// 问题 A: 22-结构体-2-测试排名
/*
    题目描述
    每次考完后，老师希望知道哪些同学通过了测试，他们的成绩排名怎样。你能编写程序帮老师进行成绩统计吗？
    统计的内容包括：通过测试线的同学个数，按照降序给出这些同学的成绩，如果成绩相同，则按照考号有小到大输出。

    输入
    多样例。每个测试文件包括多组测试用例。每组测试用例包括多行输入：
    第一行为考生人数n（1≤n<1000）、考题数m（1≤m≤10）、测试合格线g（正整数）；
    第二行为第1题至第m题的正整数分值x；
    接下来的n行，每行包括一名考生的准考证号s（长度不超过20的字符串）、该生解决的题目总数t、以及这m道题的题号 （题目号由1到m）。
    当读入的考生人数为0时，输入结束。
    输出
    第1行输出不低于分数线的考生人数
    后若干行按分数从高到低输出上线考生的考号与分数，其间用1空格分隔。
    若有多名考生分数相同，则按他们考号的升序输出。

    样例输入
    4 5 25
    10 10 12 13 15
    CS004 3 5 1 3
    CS003 5 2 4 1 3 5
    CS002 2 1 2
    CS001 3 2 3 5
    1 2 40
    10 30
    CS001 1 2
    2 3 20
    10 10 10
    CS000000000000000001 0
    CS000000000000000002 2 1 2
    0
    样例输出
    3
    CS003 60
    CS001 37
    CS004 37
    0
    1
    CS000000000000000002 20
*/

#include<stdio.h>
#include<string.h>

struct Stu{

    char id[25];
    int t;
    int score;
} stu[1010];

int main(){

    int n, m, g;

    while(scanf("%d", &n)!=EOF){

        if(n==0)    break;

        scanf("%d%d", &m, &g);

        int sumPass = 0;    // 通過人數
        int x[15] = {0};    // 各題分值

        // 初始化總成績
        for(int i=1; i<=n; i++){

            stu[i].score = 0;
        }

        // 輸入各題分值
        for(int i=1; i<=m; i++){

            scanf("%d", &x[i]);
        }

        // 開始輸入
        for(int i=1; i<=n; i++){

            scanf("%s%d", stu[i].id, &stu[i].t);

            for(int j=0; j<stu[i].t; j++){

                int num;    // 答對題號
                scanf("%d", &num);

                stu[i].score = stu[i].score + x[num];
            }

            // 計算通過人數
            if(stu[i].score>=g)
                sumPass++;
        }

        // 排序
        for(int i=1; i<n; i++){

            struct Stu tmp;

            for(int j=i+1; j<=n; j++){
                
                // 分數較低的往後
                if(stu[i].score<stu[j].score){

                    tmp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = tmp;
                }

                // 分數相同則需比較號碼
                else if(stu[i].score==stu[j].score){

                    if(strcmp(stu[i].id, stu[j].id)>0){ // 返回值>0， 則str1>str2

                        tmp = stu[i];
                        stu[i] = stu[j];
                        stu[j] = tmp;
                    }
                }
            }
        }

        // 輸出
        printf("%d\n", sumPass);
        for(int i=1; i<=n; i++){

            // 未通過者跳過不輸出
            if(stu[i].score>=g)
                printf("%s %d\n", stu[i].id, stu[i].score);
        }
    }

    return 0;
}