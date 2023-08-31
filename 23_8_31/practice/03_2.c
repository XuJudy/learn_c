//03-2. 用天平找小球(10)
#include<stdio.h>

int main(int argc, char const *argv[]){

    int A, B, C;

    for (int i = 0; i < 3; i++){
    
        scanf("%d %d %d", &A, &B, &C);

        if(A!=B){

            if(A==C)    printf("B\n");
            else    printf("A\n");
        }
        else if(A!=C){

            if(A==B)    printf("C\n");
            else    printf("A\n");
        }
        else if(C!=B){

            if(B==A)    printf("C\n");
            else    printf("B\n");
        }
    }
    
    return 0;
}
 