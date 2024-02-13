// P5729 【深基5.例7】工艺品制作

#include<stdio.h>
#include<math.h>

int main(){

    int w, x, h, q;
    int ans = 0;
    int x1, y1, z1;
    int x2, y2, z2;
    int maxX, maxY, maxZ;
    int minX, minY, minZ;
    int v[25][25][25] = {0};    // 立方體

    scanf("%d%d%d%d", &w, &x, &h, &q);

    for(int i=0; i<q; i++){
        
        scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);

        maxX = (x1>x2? x1:x2); 
        minX = (x1>x2? x2:x1); 
        maxY = (y1>y2? y1:y2);
        minY = (y1>y2? y2:y1);
        maxZ = (z1>z2? z1:z2);
        minZ = (z1>z2? z2:z1);
    
        for(int i=minX; i<=maxX; i++){

            for(int j=minY; j<=maxY; j++){

                for(int k=minZ; k<=maxZ; k++){

                    v[i][j][k] = 1;
                }
            }
        }
    }

    for(int i=1; i<=w; i++){

        for(int j=1; j<=x; j++){

            for(int k=1; k<=h; k++){

                if(v[i][j][k]==0)
                    ans++;
            }
        }
    }

    printf("%d", ans);

    return 0;
}