//问题 A: 核酸检测点选择
/*
    题目描述
    某市设有n个核酸检测点，编号从1到n，其中i号检测点的位置可以表示为一个平面整数坐标 (xi,yi)。
    为方便预约核酸检测，请根据市民所在位置(X,Y)，查询距其最近的检测点。
    多个检测点距离相同时，编号较小的视为更近。

    输入
    多组样例
    第一行包含用空格分隔的三个整数n、X 和 Y，表示检测点总数和市民所在位置。
    第二行到第 n+1 行依次输入 n 个检测点的坐标。第 i+1 行（1≤i≤n）包含用空格分隔的两个整数 xi 和 yi，表示 i 号检测点所在位置。
    x和y均≤10000 ，n≤100
    输出
    输出共一行，输出距离该市民最近的检测点的编号，坐标，和距离。距离保留两位小数，用空格隔开
    
    样例输入 Copy
    3 0 0
    3 4
    5 12
    8 15
    样例输出 Copy
    1 3 4 5.00
*/

#include<stdio.h>
#include<math.h>

int main(){

    int n, X, Y;
    int x[100] = {0};
    int y[100] = {0};

    while(scanf("%d%d%d", &n, &X, &Y)!=EOF){

        for(int i=1; i<=n; i++){

            scanf("%d%d", &x[i], &y[i]);
        }

        double MinDis = (x[1]-X)*(x[1]-X) + (y[1]-Y)*(y[1]-Y);
        int MinId = 1;

        for(int i=2; i<=n; i++){

            if( (x[i]-X)*(x[i]-X) + (y[i]-Y)*(y[i]-Y) < MinDis ){

                MinDis = (x[i]-X)*(x[i]-X) + (y[i]-Y)*(y[i]-Y);
                MinId = i;
            }
        }

        printf("%d %d %d %.2f\n", MinId, x[MinId], y[MinId], sqrt(MinDis));

        if(X==x[MinId] && Y==y[MinId])
            printf("0.00\n");
        else
            printf("%.2f\n", sqrt(MinDis));
    }

    return 0;
}