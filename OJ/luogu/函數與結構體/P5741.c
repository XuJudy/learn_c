// P5741 【深基7.例10】旗鼓相当的对手 - 加强版

#include<stdio.h>
#include<math.h>

struct Stu{

    char name[10];
    int chi;
    int math;
    int eng;
    int sum;
} stu[1100];

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%s%d%d%d", stu[i].name, &stu[i].chi, &stu[i].math, &stu[i].eng);

        stu[i].sum = stu[i].chi + stu[i].math + stu[i].eng;
    }

    for(int i=0; i<n; i++){

        int flag = 0;

        for(int j=i+1; j<n; j++){

            if( abs(stu[i].chi-stu[j].chi)<=5 && abs(stu[i].math-stu[j].math)<=5 &&
                abs(stu[i].eng-stu[j].eng)<=5 && abs(stu[i].sum-stu[j].sum)<=10 )
            {
                printf("%s %s\n", stu[i].name, stu[j].name);
            }
        }
    }

    return 0;
}