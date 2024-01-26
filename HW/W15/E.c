// 20级期末机试2-光荣榜（10分）
/*
    Description
    老师汇总了成绩后列出了成绩单，其中包括每名同学的姓名和三科（语文、数学、英语）的成绩，及三科成绩的总分。
    现在老师希望表扬一下每门课程考试得分前三名和总分前三名的同学，同分数的情况下，名字字典序更小的排前面。
    请你帮助老师写一个程序，快速完成这件事情吧。

    Input
    多组样例测试
    每组样例的第一行为一个正整数n（3≤n≤100），代表n个同学。
    接下来的n行对应n个同学的相关信息。每一行包含同学的名字s（1≤s≤10）和三个整数，三个整数分别代表的是该生语文、数学、英语三门科目对应的分数g（0≤g≤100）。
    Output
    输出每门考试的前三名的名字，和相应的分数。每个学生的信息各占一行，每科按换行隔开，按照总分，语文，数学，英语的顺序输出。
    每个测试样例的输出之间空一行，详情见样例 。

    Sample Input
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
    Sample Output
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

# include <stdio.h> 
# include <stdlib.h>
# include <limits.h>
# include <time.h>
# include <math.h>
# include <string.h>

struct student{

    char name[11];
    int chin;
    int math;
    int eng;
    int sum;
}; 

void sortbyNameDescending(struct student data[], int len){

    struct student tmp;
    
    for(int i=0;i<len-1;i++){

        for(int j=0;j<len-1-i;j++){
            
            if(strcmp(data[j].name, data[j+1].name)>0){

                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp; 
            }
        }
    }
}

void sortbyMathAscending(struct student data[], int len){
    
    struct student tmp;

    for(int i=0; i<len-1; i++){

        for(int j=0; j<len-1-i; j++){

            if(data[j].math<data[j+1].math){

                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp; 
            }
        }
    }
}

void sortbyChinAscending(struct student data[], int len){
    
    struct student tmp;
    
    for(int i=0; i<len-1; i++){

        for(int j=0; j<len-1-i; j++){

            if(data[j].chin<data[j+1].chin){

                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp; 
            }
        }
    }
}
 
void sortbyEngAscending(struct student data[], int len){
    
    struct student tmp;
    
    for(int i=0; i<len-1; i++){

        for(int j=0; j<len-1-i; j++){

            if(data[j].eng<data[j+1].eng){

                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp; 
            }
        }
    }
} 

void sortbySumAscending(struct student data[], int len){
    
    struct student tmp;

    for(int i=0; i<len-1; i++){
    
        for(int j=0; j<len-1-i; j++){

            if(data[j].sum<data[j+1].sum){

                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp; 
            }
        }
    }
} 

int main(){

    int n;
    struct student data[100];
    
    while(scanf("%d", &n)!=EOF){

        for(int i=0; i<n; i++){

            scanf("%s%d%d%d", data[i].name, &data[i].chin, &data[i].math, &data[i].eng); 

            data[i].sum = data[i].chin + data[i].math + data[i].eng;
        } 

        //输出每门考试的前三名的名字，和相应的分数
        //总分
        sortbyNameDescending(data,n);
        sortbySumAscending(data,n);

        for(int i=0; i<3; i++)
            printf("%s %d\n", data[i].name, data[i].sum);
        printf("\n");

        //语文 
        sortbyNameDescending(data,n);
        sortbyChinAscending(data,n);

        for(int i=0; i<3; i++)
            printf("%s %d\n", data[i].name, data[i].chin);
        printf("\n");

        //数学
        sortbyNameDescending(data,n);
        sortbyMathAscending(data,n);

        for(int i=0; i<3; i++)
            printf("%s %d\n", data[i].name, data[i].math);
        printf("\n");

        //英语 
        sortbyNameDescending(data,n);
        sortbyEngAscending(data,n);

        for(int i=0; i<3; i++)
            printf("%s %d\n", data[i].name, data[i].eng);
        printf("\n");
    }
    
    return 0;
}