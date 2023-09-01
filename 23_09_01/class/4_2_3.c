//算平均數(到-1停止)
/*
    1. 輸入n
    2. 若n!=-1，sum=n,x++
    3. 若n=-1，結束運行
*/
#include<stdio.h>

int main(){

    int n;
    double sum = 0;
    int count = 0;

    //法一(自己的)
    while ( scanf("%d", &n) )
    {
        if(n==-1)   break;  //若n=-1，跳出迴圈

        else{
            sum = sum + n;
            count++;
        }
    }
    
    printf("%.2lf\n", sum/count);

    //法二(老師的)
    sum = 0;
    count = 0;
    scanf("%d", &n);
    while(n!=-1){
        sum += n;
        count++;
        scanf("%d", &n);
    }
    
    printf("%.2lf\n", sum/count);

    return 0;
}