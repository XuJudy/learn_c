// P4414 [COCI2006-2007#2] ABC

#include<stdio.h>

int main(){

    int a, b, c;
    int A, B, C;

    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c){ // a最大

        C = a;

        if(b>c){

            B = b;
            A = c;
        }
        else{
            B = c;
            A = b;
        }
    }
    else if(b>a && b>c){    // b最大

        C = b;

        if(a>c){

            B = a;
            A = c;
        }
        else{
            B = c;
            A = a;
        }
    }
    else if(c>a && c>b){    // c最大

        C = c;

        if(a>b){

            B = a;
            A = b;
        }
        else{
            B = b;
            A = a;
        }
    }

    char abc[3];

    scanf("%s", abc);

    for(int i=0; i<3; i++){

        if(abc[i]=='A')
            printf("%d ", A);
        else if(abc[i]=='B')
            printf("%d ", B);
        else if(abc[i]=='C')
            printf("%d ", C);
    }

    return 0;
}