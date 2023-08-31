//03-1. 三天打鱼两天晒网(15)
#include<stdio.h>

int main(){

    int day, n;

    for (int i=0; i<5; i++){

        scanf("%d", &day);
        n = day % 5;

        if(n>3){
            printf("Drying in day %d\n", day);
        }
        else if(n==0){
            printf("Drying in day %d\n", day);
        }
        else{
            printf("Fishing in day %d\n", day);
        }
    }

    return 0;
}