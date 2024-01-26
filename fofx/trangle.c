#include<stdio.h>

int main(){

    int list[11][11] = {0};

    for(int i=0; i<11; i++){

        list[i][0] = 1;

        for(int j=1; j<i; j++){

            list[i][j] = list[i-1][j-1] + list[i-1][j];
        }
    }

    for(int i=0; i<11; i++){

        for(int k=10; k>=i; k--){

            printf(" ");
        }

        for(int j=0; j<i; j++){

            printf("%d ", list[i][j]);
        }

        printf("\n");
    }

    return 0;
}