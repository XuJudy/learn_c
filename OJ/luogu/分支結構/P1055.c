// P1055 [NOIP2008 普及组] ISBN 号码

#include<stdio.h>
#include<string.h>

int main(){

    char ISBN[20] = {0};

    scanf("%s", ISBN);

    int len = strlen(ISBN);
    int flag = 1;
    int num = 0;

    for(int i=0; i<len-1; i++){

        if(ISBN[i]=='-')
            continue;
        
        else{

            num = num + (ISBN[i]-'0')*flag;
            flag++;
        }
    }

    if(num%11==ISBN[len-1]-'0')
        printf("Right\n");
    else if(num%11==10 && ISBN[len-1]=='X')
        printf("Right\n");
    else{

        for(int i=0; i<12; i++){

            printf("%c", ISBN[i]);
        }

        if(num%11==10)
            printf("X");
        else
            printf("%d", num%11);
    }

    return 0;
}