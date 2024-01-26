//问题 AM: 20级期末机试1-幸运数（20分）
/*
    题目描述
    中南CC君特别喜欢数字6，所以他宣布对于任意一个n，凡是n后三位数字中包含6或n这个数能被6整除的正整数都是自己的幸运数。
    第1个幸运数是6，第2个幸运数是12……这样的幸运数有很多个，
    给你一组整数n（1≤n≤1000000），请你告诉CC君对应的第n个幸运数。 
    
    输入
    多样例输入。每行一个样例包含一个整数n。
    输出
    对于每一个输入的n，输出一行包含一个结果。
    
    样例输入 Copy
    1
    21
    111
    样例输出 Copy
    6
    67
    364
*/

#include<stdio.h>

int HaveSix(int x){

    int flag = 0;

    while(x>0){

        if(x%10==6){

            flag = 1;
            break;
        }

        x = x/10;
    }

    return flag;
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int num = 0;
        
        while(n>0){

            num++;

            if(num%6==0 || num%10==6 || (num/10)%10==6 || (num/100)%10==6){ //找到幸運數

                n--;
            }
        }

        printf("%d\n", num);
    }

    return 0;
}