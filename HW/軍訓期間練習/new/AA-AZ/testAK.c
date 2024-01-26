//问题 Z: WOWO爬水井

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
    int H;
    int U;
    int D;
    int F;
    while(scanf("%d%d%d%d",&H,&U,&D,&F)!=EOF){   
        //输入 0 0 0 0代表输入结束
        if(H==0 && U==0 && D==0 && F==0)
            break; 
        //从第一天开始
        int day=1;
        //初始位置是井深
        double pos = H;
        //每天上升速度
        double up = U;
        //每天下降下降速度
        double down = D;
        //pos>0确保没爬出来，pos<=H确保没掉水里
        while(pos>=0 && pos<=H)
        {
            //早上爬U米
            pos-=up;
            if(pos<0)
                break;
            //晚上下滑D米
            pos+=down;
            if(pos>H)
                break; 
            //每天都会比第一天少 F
            //每天早上爬的速度不会小于 0
            up = up - 1.0*U*F/100;            
            if(up<0)
                up=0;
            day++;
        }

        if(pos>H)
            printf("failure on day %d\n",day);
        else
            printf("success on day %d\n",day);

    }
    return 0;
}