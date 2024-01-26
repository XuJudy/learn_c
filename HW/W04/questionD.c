//问题 D: 21级期中机试-还原数列
#include<stdio.h>

int main(){

    int x;
    int A[91];
    A[1] = 1;   A[2] = 2;

    for(int i=3; i<=91; i++){   //製表

        A[i] = A[i-1] + A[i-2];
    }

    while(scanf("%d", &x)!=EOF){

        int flag = 0;   //標記: 0->沒找到 1->找到了

        for(int i=1; i<=91; i++){   //查表

            if(A[i]==x){
                
                flag = 1;   //找到了 flag更改為1
                printf("%d\n", i);
            }
        }

        if(flag==0) printf("0\n");  //沒找到 flag仍為0
    }

    return 0;
}