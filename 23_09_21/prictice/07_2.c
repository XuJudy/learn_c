//07-2. A+B和C
#include<stdio.h>

int main(){

    int T;
    long A, B, C;

    while(scanf("%d", &T)){

        for(int i=1; i<=T; i++){

            scanf("%ld%ld%ld", &A, &B, &C);

            if(A+B>C)   printf("Case #%d: true\n", i);
            else    printf("Case #%d: false\n", i);
        }
    }

    return 0;
}