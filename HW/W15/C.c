// 问题 C: 核酸检测点选择
/*
    题目描述
    某市设有n个核酸检测点，编号从1到n，其中i号检测点的位置可以表示为一个平面整数坐标 (xi,yi)。
    为方便预约核酸检测，请根据市民所在位置(X,Y)，查询距其最近的检测点。
    多个检测点距离相同时，编号较小的视为更近。

    输入
    多组样例
    输入共 n+1行。
    第一行包含用空格分隔的三个整数n、X 和 Y，表示检测点总数和市民所在位置。
    第二行到第 n+1 行依次输入 n 个检测点的坐标。第 i+1 行（1≤i≤n）包含用空格分隔的两个整数 xi 和 yi，表示 i 号检测点所在位置。
    x和y均≤10000 ，n≤100
    输出
    输出共一行，输出距离该市民最近的检测点的编号，坐标，和距离。距离保留两位小数，用空格隔开
    
    样例输入
    3 0 0
    3 4
    5 12
    8 15
    样例输出
    1 3 4 5.00
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int p1=8000, p2=4000, p3=2000, p4=1000, p5=850;

struct point{

   int x;
   int y;
   double dis;
} point[107];

int main(){

    int n, x0, y0;

    while(scanf("%d%d%d", &n, &x0, &y0)!=EOF){

        for(int i=1; i<=n; i++){

            scanf("%d%d", &point[i].x, &point[i].y);

            point[i].dis = sqrt(pow(point[i].x - x0, 2) + pow(point[i].y - y0, 2));
        } 

        int num;
        int min=INT_MAX;

        for(int i=1; i<=n; i++){

            if(point[i].dis<min){

                min = point[i].dis;
                num = i;
            }
        }

        printf("%d %d %d %.2lf\n", num, point[num].x, point[num].y, point[num].dis);                                                                                                                                                    
    }
    
    return 0;
}