// 楊輝三角

#include<stdio.h>

int main(){

    int n;
    int tri[25][25] = {0};

    tri[1][1] = 1;

    scanf("%d", &n);

    for(int i=2; i<=n; i++){

        for(int j=1; j<=i; j++){

            tri[i][j] = tri[i-1][j] + tri[i-1][j-1];
        }
    }

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){

            printf("%d ", tri[i][j]);
        }

        printf("\n");
    }

    return 0;
}