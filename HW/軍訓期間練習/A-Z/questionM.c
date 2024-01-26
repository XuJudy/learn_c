//22-基础-1-时间相加
/*
    题目描述
    小南最近加法做多了，看到什么都想尝试一下A+B。
    他在想，能否编写一个程序实现两个时间相加呢？ 
    A和B不是简单的整数，而是两个时间，由3个整数组成，分别表示时分秒，
    比如，假设A为34 45 56，表示的时间是34小时45分钟56秒。

    输入
    多样例。每个测试文件包含多行输入数据，每行是一组测试数据，由空格分开的6个整数AH,AM,AS,BH,BM,BS组成，分别表示时间A和B所对应的时分秒。题目保证所有的数据合法。
    输出
    每组测试数据输出A+B的结果，结果也是由时分秒3部分组成，同时也要满足时间的规则（即：分和秒的取值范围在0~59），每个输出占一行。
*/

#include<stdio.h>

int main(){

    int AH, AM, AS;
    int BH, BM, BS;
    int SH, SM, SS;

    while(scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS)!=EOF){

        SS = AS + BS;
        SM = AM + BM;
        SH = AH + BH;

        while(SS>=60){

            SS = SS - 60;
            SM++;
        }
        while(SM>=60){

            SM = SM - 60;
            SH++;
        }

        printf("%d %d %d\n", SH, SM, SS);
    }

    return 0;
}