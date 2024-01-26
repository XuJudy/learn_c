//22-循环-1-输入输出练习5
/*
    题目描述
    你的任务是计算多个数的和。
    
    输入
    第一行输入一个整数 n。接下来的 n行，每行都以一个整数m开头，接下来的m个数位于同一行。数据均在int范围内。
    输出
    对于输入的每组数据，你需要在一行内输出它们的和（同样的第一个数字m不算），且需要注意的是每组输出之间都要有一个空行。
*/
#include<stdio.h>

int main(){
    
    int N, m, a, sum;
    
    while(scanf("%d", &N)!=EOF){
        
        for(int i=0; i<N; i++){
            
            scanf("%d", &m);
            
            sum = 0;
            
            for(int j=0; j<m; j++){    
                
                scanf("%d", &a);
                
                sum = sum + a;
            }
            
            printf("%d\n\n", sum);
        }
    }
    
    return 0;
}