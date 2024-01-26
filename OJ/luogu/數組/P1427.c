// P1427 小鱼的数字游戏

#include<stdio.h>

int main(){

    int i = 0;
    int num[150] = {0};
    
    do{
        scanf("%d", &num[i++]);
    } while(num[i-1]!=0);

    for(int j=i-2; j>=0; j--){

        printf("%d ", num[j]);
    }

    return 0;
}