//问题 A: 22-数组-2-无进位加法
/*
    题目描述
    小南很喜欢做a+b，但是他经常忘记进位，所以他算88+12=90,而不是100。 现在你给了小南一些a+b的算式，请问他算出来会是什么？

    输入
    第一行是一个整数K，表示样例的个数。 每个样例占一行，为两个整数a,b，0≤a,b≤1e9。
    输出
    每行输出一个样例的结果,不要输出前导0。

    样例输入 Copy
    3
    1 2
    5 6
    55 55
    样例输出 Copy
    3
    1
    0
*/

#include<stdio.h>
#include<string.h>

//位數對齊
void move(char data[], int len1, int len2){

    if(len1>len2){

        for(int i=len2-1; i>=0; i--)
            data[i+len1-len2] = data[i];
        for(int i=0; i<len1-len2; i++)
            data[i] = '0';
    }
    else{

        for(int i=len1-1; i>=0; i--)
            data[i+len2-len1] = data[i];
        for(int i=0; i<len2-len1; i++)
            data[i] = '0';
    }
}

int main(){

    int n;
    int len1, len2, max;
    char num1[100] = {0};
    char num2[100] = {0};
    int sum [100] = {0};

    while(scanf("%d", &n)!=EOF){

        for(int j=0; j<n; j++){

            int ans = 0;
            int flag = 0;   //標記前面是否為0

            scanf("%s%s", &num1, &num2);

            len1 = strlen(num1);
            len2 = strlen(num2);

            max = len1;

            //長度不一樣要對齊
            if(len1!=len2){

                if(len1>len2){
                    
                    move(num2, len1, len2);
                }
                else{
                    
                    max = len2;
                    move(num1, len1, len2);
                }
            }

            //位數相加
            for(int i=0; i<max; i++){

                sum[i] = (num1[i]-'0') + (num2[i]-'0');

                //不進位
                if(sum[i]>=10)
                    sum[i] = sum[i] - 10;
            }

            //輸出
            for(int i=0; i<max; i++){
                
                //開頭為0不輸出
                if(sum[i]==0 && flag==0)    continue;
                //開頭不為0輸出
                else if(sum[i]!=0 && flag==0){

                    printf("%d", sum[i]);
                    flag = 1;
                }
                //不是在面的0不能忽略要輸出
                else if(flag!=0)    printf("%d", sum[i]);
            }

            //全為0沒輸出
            if(flag==0) 
                printf("0");

            //統一換行
            printf("\n");
        }
    }

    return 0;
}