//问题 AV: 20级期末机试2-过元旦（20分）
/*
    题目描述
    中南CC君很开心，因为2021年的元旦节已过，幸福的寒假就马上来临。
    可是他突然想到一个问题，自己自出生的那一天起，到2021年1月1日，一共过了多少天呢？
    同时，他还想知道从公元后的某一个日期起，到2021年1月1日，一共过了多少天呢？
    请你帮他计算一下这些日期到2021年1月1日所经过的总天数（不超过109）。
    说明：假设使用的都是格里高利历，即闰年的定义都是：能被4整除但不能被100整除或者能被400整除。
    
    输入
    多样例输入，总共有T个样例。样例数为正整数T（int型）由第一行输入，后面T行每行有一个日期，格式是YYYY-MM-DD。如我的生日是1988-03-07。
    注意所有的生日都不会晚于2021-01-01。 
    输出
    T行，每行一个数，表示从给定日期到2021年1月1日所经过的天数（含给定日期那天和2021年1月1日）。 
    
    样例输入 Copy
    2
    1988-03-07
    2021-01-01
    样例输出 Copy
    11989
    1
*/

#include<stdio.h>

int year(int x){

    if((x%4==0 && x%100!=0) || x%400==0)
        return 1;
    else
        return 0;
}

int main(){

    int T;

    while(scanf("%d", &T)!=EOF){

        for(int i=0; i<T; i++){

            int y, m, d;
            int tmp_y, tmp_m;
            int sum_day = 0;

            scanf("%d-%d-%d", &y, &m, &d);
            tmp_y = y;
            tmp_m = m;

            //間隔幾年
            y++;
            while(y<2021){

                if(year(y))    //潤年
                    sum_day = sum_day + 366;
                else
                    sum_day = sum_day + 365;

                y++;
            }

            //起始那年剩幾個月
            y = tmp_y;
            m++;
            while(m<=12){
                
                switch(m){
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        sum_day = sum_day + 30;
                        break;

                    case 2:
                        if(year(y))
                            sum_day = sum_day + 29;
                        else
                            sum_day = sum_day + 28;
                        break;

                    default:
                        sum_day = sum_day + 31;
                        break;
                }

                m++;
            }

            //起始那個月剩幾天
            switch(tmp_m){
                
                case 4:
                case 6:
                case 9:
                case 11:
                    sum_day = sum_day + 31 - d;
                    break;

                case 2:
                    if(year(y))
                        sum_day = sum_day + 30 - d;
                    else
                        sum_day = sum_day + 29 - d;
                    break;

                default:
                    sum_day = sum_day + 32 - d;
                    break;
            }

            //元旦當天
            if(tmp_y==2021 && tmp_m==1 && d==1) sum_day = 0;
           
            //加上元旦當天
            printf("%d\n", sum_day+1);
        }
    }

    return 0;
}