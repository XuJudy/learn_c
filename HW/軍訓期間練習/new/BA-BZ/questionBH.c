//问题 BH: 20级期末机试2-奇序列（20分）
/*
    题目描述
    中南CC君有很多长度不同的非负整数序列，他发现其中有些序列有一个共同的特点，
    (1)序列长度是奇数
    (2)序列中的第一个数字是奇数，最后一个数字也是奇数
    于是他将其取名为奇序列。
    
    输入
    多组样例。 
    第一行包含一个正整数n(1≤n≤100)，第二行包含n个非负整数ai (0 ≤ ai ≤ 100) 。
    输出
    如果序列满足奇序列要求就输出"Yes"，否则输出"No"。
    
    样例输入 Copy
    3
    1 3 5
    5
    1 0 1 5 1
    3
    4 3 1
    4
    3 9 9 3
    样例输出 Copy
    Yes
    Yes
    No
    No
*/

#include<stdio.h>

int main(){

    int n; 

    while(scanf("%d", &n)!=EOF){

        int number[100] = {0};

        for(int i=0; i<n; i++){

            scanf("%d", &number[i]);
        }

        if(n%2==1 && number[0]%2==1 && number[n-1]%2==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
