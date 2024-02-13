// P1789 【Mc生存】插火把

#include<stdio.h>

int main(){

    int n, m, k; // 方陣大小、火把、螢石
    int cnt = 0;
    int fire[120][120] = {0};

    scanf("%d%d%d", &n, &m, &k);

    for(int i=0; i<m; i++){

        int x, y;

        scanf("%d%d", &x, &y);

        for(int j=-1; j<2; j++){

            for(int l=-1; l<2; l++){

                fire[x+j][y+l] = 1;
            }
        }

        fire[x+2][y] = 1;
        fire[x-2][y] = 1;
        fire[x][y+2] = 1;
        fire[x][y-2] = 1;
    }
    for(int i=0; i<k; i++){

        int x, y;

        scanf("%d%d", &x, &y);

        for(int j=-2; j<3 && j<=n; j++){

            for(int l=-2; l<3 && l<=n; l++){

                fire[x+j][y+l] = 1;
            }
        }
    }

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){

            if(fire[i][j]==0)   cnt++;
        }

    }

    printf("%d", cnt);

    return 0;
}