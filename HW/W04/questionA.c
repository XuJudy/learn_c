//问题 A: 核酸检测点选择
#include<stdio.h>
#include<math.h>

int main(){

    int n, X, Y, min;   //檢測點數量、市民x座標、市民y座標、最短距離
    int x[100], y[100]; //檢測站的x.y座標

    while(scanf("%d%d%d", &n, &X, &Y)!=EOF){

        int ID = 1; //檢測站編號

        for(int i=1; i<=n; i++){    //製表

            scanf("%d%d", &x[i], &y[i]);
        }

        min = (x[ID]-X)*(x[ID]-X) + (y[ID]-Y)*(y[ID]-Y); //令檢測站1為最小距離

        for(int i=2; i<=n; i++){    //一個個比較

            if( (x[i]-X)*(x[i]-X) + (y[i]-Y)*(y[i]-Y) < min){

                min = (x[i]-X)*(x[i]-X) + (y[i]-Y)*(y[i]-Y);    //小於則更換最小距離值
                ID = i;     //更新ID
            }
        }

        printf("%d %d %d %.2f\n", ID, x[ID], y[ID], sqrt(min));
    }

    return 0;
}