// 結構體輸出練習

#include<stdio.h>

struct People{

    char name[20];
    char tele[15];
    int age;
    int high;
    int weigh;
};

void print1(struct People * sp){    // 結構體指針->成員變量

    printf("%s %s %d %d %d\n", sp->name, sp->tele, sp->age, sp->high, sp->weigh);
}

void print2(struct People p){   // 結構體變量.成員變量

    printf("%s %s %d %d %d\n", p.name, p.tele, p.age, p.high, p.weigh);
}

int main(){

    struct People p1 = {"Nick", "19506605983", 28, 175, 60};

    print1(&p1);    // &p1: 取地址
    print2(p1);

    return 0;
}