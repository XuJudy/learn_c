//问题 BW: 20级期末机试2-光荣榜（10分）
/*
    题目描述
    中南CC君所在的班级进行了一次摸底考试，考试科目包括语文、数学、英语共三门。
    中南CC君的老师汇总了成绩后列出了成绩单，其中包括每名同学的姓名和三科（语文、数学、英语）的成绩，及三科成绩的总分。
    现在老师希望表扬一下每门课程考试得分前三名和总分前三名的同学，同分数的情况下，名字字典序更小的排前面。
    请你帮助老师写一个程序，快速完成这件事情吧。
    
    输入
    多组样例测试，每组样例的第一行为一个正整数n（3≤n≤100），代表n个同学。
    接下来的n行对应n个同学的相关信息。每一行包含同学的名字s（1≤s≤10）和三个整数，三个整数分别代表的是该生语文、数学、英语三门科目对应的分数g（0≤g≤100）。
    输出
    输出每门考试的前三名的名字，和相应的分数。每个学生的信息各占一行，每科按换行隔开，按照总分，语文，数学，英语的顺序输出。
    每个测试样例的输出之间空一行，详情见样例 。
    
    样例输入
    4
    alice 80 70 60
    bob 99 87 55
    eric 100 30 99
    lily 70 80 66
    5
    aaa 80 90 100
    bbb 87 99 63
    ccc 45 65 76
    ddd 88 89 92
    eee 99 87 95
    样例输出
    bob 241
    eric 229
    lily 216

    eric 100
    bob 99
    alice 80

    bob 87
    lily 80
    alice 70

    eric 99
    lily 66
    alice 60

    eee 281
    aaa 270
    ddd 269

    eee 99
    ddd 88
    bbb 87

    bbb 99
    aaa 90
    ddd 89

    aaa 100
    eee 95
    ddd 92
*/

#include<stdio.h>

void sort(int list[], char id[], int n){

    for(int i=1; i<=n; i++){

        for(int j=i; j<n; j++){

            if(list[j]>list[j+1]){

                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;

                tmp = id[j];
                id[j] = id[j+1];
                id[j+1] = tmp;
            }
        }
    }
}

int main(){

    int n;
    int C_grade[101] = {0};
    int M_grade[101] = {0};
    int E_grade[101] = {0};
    char name[11] = {0};
    char tmp_name[101] = {0};

    while(scanf("%d", &n)!=EOF){

        for(int i=1; i<=n; i++){

            scanf("%c", &name[i]);
            scanf("%d%d%d", &C_grade[i], &M_grade[i], &E_grade[i]);

            int sum_garde[101] = {0};

            for(int j=1; j<=n; j++){    //保存name的順序

                tmp_name[j] = name[j];
            }

            for(int j=1; j<=n; j++){

                sum_garde[j] = C_grade[j] + M_grade[j] + E_grade[j];
            }

            //總分
            sort(sum_garde, name, n);   //排序

            for(int i=1; i<=n; i++){    //輸出

                printf("%c %d\n", name[i], sum_garde[i]);
            }

            printf("\n");

            //語文
            for(int j=1; j<=n; j++){    //初始化name的順序

                name[j] = tmp_name[j];
            }

            sort(C_grade, name, n);

            for(int i=1; i<=n; i++){    //輸出

                printf("%c %d\n", name[i], C_grade[i]);
            }

            printf("\n");

            //數學
            for(int j=1; j<=n; j++){    //初始化name的順序

                name[j] = tmp_name[j];
            }

            sort(M_grade, name, n);

            for(int i=1; i<=n; i++){    //輸出

                printf("%c %d\n", name[i], M_grade[i]);
            }

            printf("\n");

            //英語
            for(int j=1; j<=n; j++){    //初始化name的順序

                name[j] = tmp_name[j];
            }

            sort(C_grade, name, n);

            for(int i=1; i<=n; i++){    //輸出

                printf("%c %d\n", name[i], E_grade[i]);
            }

            printf("\n");
        }
    }

    return 0;
}