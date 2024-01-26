//问题 Z: WOWO爬水井
/*
题目描述
有一天WOWO掉到水井中去了，该井深H米，早上爬U米，晚上下滑D米，且它从第二天开始每天疲劳，每天都会比第一天少 F %。(注: 蜗牛每天早上爬的速度不会小于 0)
如果WOWO在第N天还能爬出井底回到PIPI身边，即越过井口，则输出"success on day N"
如果WOWO在第N天落入了井底以下(井底本来有水，WOWO最初始的状况是浮在水面上，所以WOWO如果爬不上去最终会沉入水中)，再也不能回到PIPI身边了，则输出"failure on day N"

输入
输入包含多组测试用例。
对于每一组测试用例，输入4个整数H U D F。(1<=H,U,D,F<=100)。
输入 0 0 0 0代表输入结束。
输出
对于每组测试用例，输出按照

样例输入 Copy
6 3 1 10
10 2 1 50
50 5 3 14
50 6 4 1
50 6 3 1
1 1 1 1
0 0 0 0
样例输出 Copy
success on day 3
failure on day 4
failure on day 7
failure on day 68
success on day 20
failure on day 2
*/
/*  未完成  */

#include<stdio.h>

int main(){

    double H, U, D, F;
    //井深H米、早上爬U米、晚上下滑D米、每天都会比第一天少 F %

    while(scanf("%d%d%d%d", &H, &U, &D, &F)!=EOF){

        if(H==0 && U==0 && D==0 && F==0)    break;

        int Day = 0;
        int flag = 0;
        double dis = H;

        while(dis>0){

            dis = dis - U + D;
            U = U - 0.01*F*U;
            Day++;

            if(dis>H){

                flag++;
                break;
            }
        }

        if(flag==1)
            printf("failure on day %d\n", Day);
        else
            printf("success on day %d\n", Day);
    }

    return 0;
}