//问题 CA: 21级补考-考试测评（10分）
/*
题目描述
小南所在的专业进行了一次摸底考试，考试科目包括数学、英语和C语言三门。
考试完后，他想知道，总分成绩最高的和最低的同学的信息，
按照学号、总分、数学、英语和C语言的顺序给出。如果有多个最高分和最低分，要求全部输出，按学号有小到大排列。你能帮他实现吗？

输入
多组样例测试，每组样例的第一行为一个正整数n（1≤n≤1000），代表专业有n个同学。
接下来的n行对应n个同学的相关信息。每一行包含4个整数，分别代表该生的学号（4位整数）和数学、英语、C语言三门科目对应的分数g（0≤g≤100）。
输出
每个样例先输出"BEST"，再输出总分最高的学生信息，然后输出"WORST"，再输出总分最低的学生信息。每个学生的信息各占一行，按照学号、总分、数学、英语和C语言的顺序输出。注意如果有相同的最高分或最低分，则根据学号，从小到大排序全部输出。
每个测试样例的输出之间空一行，详情见样例 。
*/
/*
样例输入
4
1001 80 70 60
1002 100 100 100
2001 100 30 50
2002 70 80 66
5
1001 80 90 100
1002 100 90 90
2001 90 90 100
2002 88 89 92
2003 60 70 80
样例输出 Copy
BEST
1002 300 100 100 100
WORST
2001 180 100 30 50

BEST
1002 280 100 90 90
2001 280 90 90 100
WORST
2003 210 60 70 80
*/

#include<stdio.h>

void chage(int list[], int x){

    int tmp = list[x];
    list[x] = list[x+1];
    list[x+1] = tmp;
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        //聲明
        int student[1000] = {0};
        int gradeSum[1000] = {0};
        int gradeMath[1000] = {0};
        int gradeEnglish[1000] = {0};
        int gradeC[1000] = {0};

        int Max_student[1000] = {0};
        int Max_gradeSum[1000] = {0};
        int Max_gradeMath[1000] = {0};
        int Max_gradeEnglish[1000] = {0};
        int Max_gradeC[1000] = {0};

        int Min_student[1000] = {0};
        int Min_gradeSum[1000] = {0};
        int Min_gradeMath[1000] = {0};
        int Min_gradeEnglish[1000] = {0};
        int Min_gradeC[1000] = {0};

        for(int i=0; i<n; i++){ //輸入

            scanf("%d%d%d%d", &student[i], &gradeMath[i], &gradeEnglish[i], &gradeC[i]);

            gradeSum[i] = gradeMath[i] + gradeEnglish[i] + gradeC[i];
        }

        for(int i=n-1; i>=0; i--){ //排序

            for(int j=0; j<i; j++){

                if(gradeSum[j]>gradeSum[j+1]){

                    chage(student, j);
                    chage(gradeMath, j);
                    chage(gradeEnglish, j);
                    chage(gradeC, j);
                    chage(gradeSum, j);
                }
            }
        }

        Max_student[0] = student[n-1];
        Max_gradeSum[0] = gradeSum[n-1];
        Max_gradeMath[0] = gradeMath[n-1];
        Max_gradeEnglish[0] = gradeEnglish[n-1];
        Max_gradeC[0] = gradeC[n-1];

        Min_student[0] = student[0];
        Min_gradeSum[0] = gradeSum[0];
        Min_gradeMath[0] = gradeMath[0];
        Min_gradeEnglish[0] = gradeEnglish[0];
        Min_gradeC[0] = gradeC[0];

        //找最高的人數
        int max = gradeSum[n-1];
        int maxSum = 1;
        for(int i=n-2; i>=0; i--){

            if(gradeSum[i]==max){
                
                Max_student[maxSum] = student[i];
                Max_gradeSum[maxSum] = gradeSum[i];
                Max_gradeMath[maxSum] = gradeMath[i];
                Max_gradeEnglish[maxSum] = gradeEnglish[i];
                Max_gradeC[maxSum] = gradeC[i];
                
                maxSum++;
            }
            else break;
        }

        //找最低的人數
        int min = gradeSum[0];
        int minSum = 1;
        for(int i=1; i<n; i++){

            if(gradeSum[i]==min){

                Min_student[minSum-1] = student[i];
                Min_gradeSum[minSum-1] = gradeSum[i];
                Min_gradeMath[minSum-1] = gradeMath[i];
                Min_gradeEnglish[minSum-1] = gradeEnglish[i];
                Min_gradeC[minSum-1] = gradeC[i];
                
                minSum++;
            }
            
        }

        if(maxSum>1){

            for(int i=maxSum; i>=0; i--){ //排序

                for(int j=0; j<i; j++){

                    if(gradeSum[j]>gradeSum[j+1]){

                        chage(Max_student, j);
                        chage(Max_gradeEnglish, j);
                        chage(Max_gradeEnglish, j);
                        chage(Max_gradeC, j);
                        chage(Max_gradeSum, j);
                    }
                }
            }
        }
        if(minSum>1){

            for(int i=minSum; i>=0; i--){ //排序

                for(int j=0; j<i; j++){

                    if(gradeSum[j]>gradeSum[j+1]){

                        chage(Min_student, j);
                        chage(Min_gradeMath, j);
                        chage(Min_gradeEnglish, j);
                        chage(Min_gradeC, j);
                        chage(Min_gradeSum, j);
                    }
                }
            }
        }

        //輸出
        //BEST
        printf("BEST\n");
        for(int i=1; i<=maxSum; i++){

            printf("%d %d %d %d %d\n", Max_student[n-i], Max_gradeSum[n-i], Max_gradeMath[n-i], Max_gradeEnglish[n-i], Max_gradeC[n-i]);
        }

        //WORST
        printf("WORST\n");
        for(int i=0; i<minSum; i++){

            printf("%d %d %d %d %d\n", Min_student[i], Min_gradeSum[i], Min_gradeMath[i], Min_gradeEnglish[i], Min_gradeC[i]);
        }
    }

    return 0;
}