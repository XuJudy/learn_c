// P1046 [NOIP2005 普及组] 陶陶摘苹果

#include<stdio.h>

int main(){

    int apple[20] = {0};
    int sum = 0;
    int max;

    for(int i=0; i<10; i++){

        scanf("%d", &apple[i]);
    }

    scanf("%d", &max);

    max = max + 30;

    for(int i=0; i<10; i++){

        if(apple[i]<=max){

            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}