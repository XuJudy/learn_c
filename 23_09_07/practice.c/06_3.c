//06-3. 单词长度
#include<stdio.h>

int main(){

    char c[100];
    int i = 0;
    int sum = 0;    //字符數
    int k = 0;      //控制空格- 0:不給空格　1：給空格

    do{
        scanf("%c", &c[i]);
        i++;
    }while(c[i-1] != '.');

    for(int j=0; j<i; j++){

        if(c[j] != ' '){    //還沒讀完一組字符

            sum++;  //讀到一的字符

            if(c[j] == '.'){    //結束

                printf("%d", sum-1);    //扣掉多數的.
            }
            
            if(k==1){   //給予空格

                printf(" ");
                k = 0;
            }
        }

        else if(c[j] == ' '){ //讀完一個字符

            printf("%d", sum);
            sum = 0;    //歸零
            k = 1;  //給空格
        }
    }

    return 0;
}