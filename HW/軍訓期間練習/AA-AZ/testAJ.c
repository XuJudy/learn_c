#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int set[50][50];

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                scanf("%d", &set[i][j]);
            }
        }

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                printf("%d", set[j][i]);

                if(j!=n-1)  printf(" "); 
            }

            printf("\n");
        }
    }

    return 0;
}