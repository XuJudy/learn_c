//switch-case
#include<stdio.h>

int
 main(){

    int type;

    for(int i=0; i<5; i++){

        scanf("%d", &type);

        switch(type){

            case 1:     //case 常量:
                printf("你好");
                break;
            case 2:
                printf("早上好");
                break;
            case 3:
                printf("晚上好");
                break;
            case 4:
                printf("再見");
                break;
            default:
                printf("啊,什麼啊?");
        }

    }

    return 0;
 }