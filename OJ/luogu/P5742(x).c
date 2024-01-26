// P5742 【深基7.例11】评等级

#include<stdio.h>

struct Stu{

    int id;
    double xy;
    double sz;
    double zh;
    int sum;
} stu[100000];

int main(){

    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d%lf%lf", &stu[i].id, &stu[i].xy, &stu[i].sz);
        stu[i].zh = stu[i].sz*30 + stu[i].xy*70;
        stu[i].sum = stu[i].sz + stu[i].xy;
    }

    for(int i=0; i<n; i++){

        if(stu[i].zh>=80.0 && stu[i].sum>140)
            printf("Excellent\n");
        else
            printf("Not excellent\n");
    }

    return 0;
}