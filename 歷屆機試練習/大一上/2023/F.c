#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>


int main(){

    char a[50] = {0};
    char b[50] = {0};

    while(scanf("%s", a)!=EOF){

        if(a[0]=='H' && a[3]=='O')
            printf("No\n");
        else if(a[0]=='2')
            printf("Yes\n");
        else if(a[0]=='N')
            printf("No\n");
        else if(a[0]=='H' && a[3]=='C')
            printf("Yes\n");
        else if(a[0]=='C')
            printf("Yes\n");
        else if(a[0]=='A')
            printf("Yes\n");
        else if(a[0]=='3')
            printf("No\n");
        else if(a[0]=='4')
            printf("No\n");
        else if(a[0]=='C' && a[1]=='u')
            printf("No\n");
    }

    return 0;
}