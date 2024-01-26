//P1425 小鱼的游泳时间
#include<stdio.h>

int main(){

    int h1, m1, h2, m2, h3, m3;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1>h2){
        
        h3 = h2;
        h2 = h1;
        h1 = h3;

        m3 = m2;
        m2 = m1;
        m1 = m3;

    }

    if(m1>m2){

        h2--;
        m2 = m2 + 60;
    }

    h3 = h2 - h1;
    m3 = m2 -m1;

    printf("%d %d", h3, m3);

    return 0;
}