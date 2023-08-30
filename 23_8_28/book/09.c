//Ch2 編程練習5.

#include<stdio.h>

void br(){

    printf("Brazil, Russia");
}

void ic(){

    printf("India, China");
}

int main(){

    br();
    printf(", ");
    ic();

    printf("\n");
    ic();

    printf("\n");
    br();

    return 0;
}