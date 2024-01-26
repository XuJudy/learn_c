// P5740 【深基7.例9】最厉害的学生

#include<stdio.h>

struct Stu{

    char name[10];
    int chi;
    int math;
    int eng;
    int sum;
} stu[1500];

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%s%d%d%d", stu[i].name, &stu[i].chi, &stu[i].math, &stu[i].eng);

        stu[i].sum = stu[i].chi + stu[i].math + stu[i].eng;
    }

    int id = 0;
    int max = stu[0].sum;

    for(int i=1; i<n; i++){

        if(stu[i].sum>max){

            id = i;
            max = stu[i].sum;
        }
    }

    printf("%s %d %d %d\n", stu[id].name, stu[id].chi, stu[id].math, stu[id].eng);

    return 0;
}