// P5744 【深基7.习9】培训

#include<stdio.h>

struct Member{

    char name[20];
    int age;
    int NOIP;
} member[10];

void Train(struct Member people){

    people.age++;
    people.NOIP = people.NOIP*1.2;

    if(people.NOIP>600)
        people.NOIP = 600;

    printf("%s %d %d\n", people.name, people.age, people.NOIP);    
}

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%s%d%d", member[i].name, &member[i].age, &member[i].NOIP);    
    }

    for(int i=0; i<n; i++){

        Train(member[i]);
    }

    return 0;
}