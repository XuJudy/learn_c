//问题 AC: 20级期中机试-小帅的沙漏（10分）
/*  题目描述
    小帅用字符输出一个如同样例格式的沙漏的图形。要求如下：
    用-做上下底
    用\和/做斜边
    用*表示沙子
    上层沙子空一行，其他行填满；下层沙子只有中间一列。
    上下底的行首无空格，所有行的行末无空格。
*/
/*  输入
    第一行是样例数T(1≤T≤75)。 以后的每行一个样例，是一个整数n(6≤n≤80)，n是偶数，表示沙漏的行数。
    输出
    每行输出一个对应的图形，每个样例之后输出一个空行。 
*/

#include<stdio.h>

int main(){

    int T;

    while(scanf("%d", &T)!=EOF){

        for(int i=0; i<T; i++){

            int n;
            int flag = 1;   //紀錄上層層數
            int mark_l = 1; //紀錄沙漏下部左邊的空格數
            int mark_r = 1; //紀錄沙漏下部右邊的空格數

            scanf("%d", &n);

            for(int i=1; i<n; i++){  //上底
            
                printf("-");
            }

            printf("\n");

            for(int i=0; i<n/2-1; i++){   //中間上層[層數]

                for(int j=0; j<i; j++)  //外面左空格
                    printf(" ");

                printf("\\");

                if(flag==1){    //最上面那層
                    
                    flag++;

                    for(int j=1; j<=n-3; j++){

                        printf(" ");    //無沙子
                    }
                }
                else{   //其他層

                    for(int j=1; j<2*(n/2-i)-2; j++){

                        printf("*");    //皆有沙子
                    }
                    flag++;
                }

                printf("/\n");
            }

            for(int i=n/2; i>1; i--){   //中間下層[層數]

                for(int j=2; j<i; j++)  //外面左空格
                    printf(" ");

                printf("/");    //左邊界

                /*  n=6
                    -----   
                    \   /
                     \*/
                     /*\    i=3 j=1  k=1
                    / * \   i=2 j=2  k=2
                    -----
                */

                //裡面左空格
                {
                    for(int j=1; j<mark_l; j++){

                        printf(" ");
                    }

                    if(mark_l<flag)   mark_l++;
                }
                
                printf("*");
                
                //裡面右空格
                {
                    for(int j=1; j<mark_r; j++){

                        printf(" ");
                    }

                    if(mark_r<flag)   mark_r++;
                }

                printf("\\\n"); //右邊界
            }

            for(int i=1; i<n; i++){  //下底
            
                printf("-");
            }
        
            printf("\n\n");
        }
    }

    return 0;
}