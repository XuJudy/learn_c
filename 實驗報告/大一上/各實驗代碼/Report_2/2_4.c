// 找出2～5000中的完数

#include <stdio.h>

int main(){

    int i, j, sum;

    for(int i=2; i<=5000; i++) {

        sum = 0;
        for(int j=1; j<=i/2; j++) {

            if(i%j==0)
                sum = sum + j;
        }
        
        if(sum==i)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}