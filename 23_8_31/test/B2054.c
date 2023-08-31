//B2054 求平均年龄
#include<stdio.h>

int main(){

    int n;
    double sum = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        int num;
        scanf("%d", &num);
        sum = sum + num;
    }
    
    printf("%.2lf\n", sum/n);

    return 0;
}