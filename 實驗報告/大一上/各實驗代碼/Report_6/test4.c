/*
    13、老鼠迷宫问题
        （1）利用2纬数组构建迷宫
        （2）实现老鼠从入口到出口的所有路径，并将路径保存到文件
    选择某一种路径，动态实现老鼠在迷宫中的运行轨迹
*/

#include <stdio.h>
#include <stdlib.h>
#define M 9

// 迷宮初始化[全局變量]
// 0:路 1:位置  2:牆    3:無    4:左
// 5:下 6:右    7:無    8:上    9:無
int maze[M][M] =
{
        {2,5,2,2,2,2,2,2,2},
        {2,0,0,0,0,0,0,0,2},
        {2,0,2,2,0,2,2,0,2},
        {2,0,2,0,0,2,0,0,2},
        {2,0,2,0,2,0,2,0,2},
        {2,0,0,0,0,0,2,0,2},
        {2,2,0,2,2,0,2,2,2},
        {2,0,0,0,0,0,0,0,6},
        {2,2,2,2,2,2,2,2,2}
};

int path[M*M][2] = {0};         // 存储經過的路徑座標
int start1 = 1, start2 = 1;     // 假定[1][1]是入口
int end1 = 7, end2 = 7;         // 假定[7][7]是出口
int pathNum = 0;                // 走過的位置編號
int flag = 1;                   // 第幾個路徑

void rewrite(int list[M*M][2], int n){  // 第一次寫入先清空

    FILE *fp = fopen("path.txt", "w");
    
    for(int i=0; i<n; i++){

        fprintf(fp, "(%d,%d)", list[i][0], list[i][1]);
    }

    fprintf(fp, "\n");
    fclose(fp);
}

void write(int list[M*M][2], int n){    // 寫入

    FILE *fp = fopen("path.txt", "a+");
    
    for(int i=0; i<n; i++){

        fprintf(fp, "(%d,%d)", list[i][0], list[i][1]);
    }

    fprintf(fp, "\n");
    fclose(fp);
}

void visit(int i, int j){

    maze[i][j] = 1;

    if(i==end1 && j==end2 && flag==1){  // 判断是否到达出口位置，到达直接输出[第一個]

        flag++; // 只要輸出一個路徑

        printf("\n显示路径：\n");

        for(int m=0; m<M; m++){

            maze[i][j] = 6;

            for(int n=0; n<M; n++){

                if(maze[m][n] == 2)
                    printf("◾");
                else if(maze[m][n] == 4){

                    printf(" ←");

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 5){

                    printf(" ↓");

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 6){
                    
                    printf(" →");

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 8){

                    printf(" ↑");

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else
                    printf("  ");
            }
            
            printf("\n");
        }
    
        rewrite(path, pathNum); // 每次的第一次寫入要先清空
        pathNum = 0;
    }
    else if(i==end1 && j==end2 && flag!=1){  // 判断是否到达(5,5)出口位置，到达直接输出

        for(int m=0; m<M; m++){

            maze[i][j] = 6;

            for(int n=0; n<M; n++){

                if(maze[m][n] == 4){

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 5){

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 6){

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
                else if(maze[m][n] == 8){

                    path[pathNum][0] = m;
                    path[pathNum][1] = n;
                    pathNum++;
                }
            }
        }
    
        write(path, pathNum);
        pathNum = 0;
    }


    // 分析老鼠可以在迷宫移动的方向，并递归求下一步.
    // 8上5下4左6右
    if(maze[i-1][j] == 0){  // 向上

        maze[i][j] = 8;
        visit(i-1, j);
    }
    if(maze[i+1][j] == 0){  // 向下

        maze[i][j] = 5;
        visit(i+1, j);
    }
    if(maze[i][j-1] == 0){  // 向左

        maze[i][j] = 4;
        visit(i, j-1);
    }
    if(maze[i][j+1] == 0){  // 向右

        maze[i][j] = 6;
        visit(i, j+1);
    }
    
    //若代码运行到这一步，则证明前面走的路径并不能到达出口，则返回，把走过的位置重新写作0
    maze[i][j] = 0;
}

int main(){

    int i, j;

    printf("初始迷宫：\n");

    for(i=0; i<M; i++){   // 打印初始化迷宮
    
        for(j=0 ;j<M; j++){

            if(maze[i][j] == 2)
                printf("◾");
            else if(maze[i][j] == 5)
                printf(" ↓");
            else if(maze[i][j] == 6)
                printf(" →");
            else
                printf("  ");
        }
        
        printf("\n");
    }

    visit(start1,start2);   // 调用visit函数，把输出内容放在visit函数中，让所有路径进行遍历

    return 0;
}

/*
---------------------------------------------------------------
    參考網站: https://www.cnblogs.com/tansss/p/12517473.html
---------------------------------------------------------------
*/