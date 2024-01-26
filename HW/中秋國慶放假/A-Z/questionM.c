//问题 M: 22-循环-2-算算n！
#include<stdio.h>

/*
    2009 = 7 * 7 *41
    所以41以後的數皆餘0
*/

int main(){

    int n;

    while (scanf("%d", &n)!=EOF){

        //41以後皆餘0
        if(n>=41)   printf("0\n");

        else{
            int sum = 1;    //階層從1開始
            
            for(int i=2; i<=n; i++){

                sum = sum * i;
                sum = sum % 2009;
            }

            printf("%d\n", sum);
        }
    }

    return 0;
}