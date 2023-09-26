//P5717 【深基3.习8】三角形分类
#include<stdio.h>

int main(){

    int a, b, c;
    int list[100];

    //輸入
    for(int i=0; i<3; i++){

        scanf("%d", &a);

        list[i] = a;
    }

    //排序
    for(int i=0; i<3; i++){

        for(int j=0; j<2; j++){

            if(list[j]>list[j+1]){

                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }

    a = list[0];
    b = list[1];
    c = list[2];

    int num = 0;    //統計多少邊一樣長

    if(a==b)    num++;
    if(a==c)    num++;
    if(b==c)    num++;

    //判斷
    if(a+b<=c || a+c<=b || b+c<=a){
        
        printf("Not triangle");
    }
    else{

        if(a*a+b*b==c*c)    printf("Right triangle\n");
        if(a*a+b*b>c*c)     printf("Acute triangle\n");
        if(a*a+b*b<c*c)     printf("Obtuse triangle\n");
        if(num!=0)          printf("Isosceles triangle\n");
        if(num==3)          printf("Equilateral triangle\n");
    }

    return 0;
}