//问题 Y: 22-循环-2-勾股数
#include<stdio.h>

int main(){

    int a, b, c;
    int flag;   //檢測是否有勾股數

    while(scanf("%d%d", &a, &b)!=EOF){

        c = 1;
        flag = 0;   //預設沒有

        while(c<a+b&&c>a-b || c<a+b&&c>b-a){

            if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){   //找到勾股數

                flag = 1;   //標記為找到

                break;  //找到第一個即為最小，直接退出循環
            }

            c++;
        }

        if(flag==1) //有勾股數
            printf("%d\n", c);
        else        //無勾股數
            printf("None\n");
    }

    return 0;
}