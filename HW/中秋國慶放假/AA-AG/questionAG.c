//问题 AG: 分解质因数
#include<stdio.h>

int main(){

    int a, b, tmp_i, flag;

    scanf("%d%d", &a, &b);

    for(int i=a; i<=b; i++){

        flag = 0;
        tmp_i = i;

        printf("%d=", i);

        for(int j=2; j<=i; j++){

            while(tmp_i%j==0){

                tmp_i = tmp_i/j;
                flag++;
            
                if(flag==2){

                    printf("*%d", j);
                    flag--;
                }
                else    printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}