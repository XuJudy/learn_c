//03-3. 12-24小时制(15)
#include<stdio.h>

int main(){

    for (int i=0; i<5; i++){

        int hr, min;
        scanf("%d:%d", &hr, &min);

        if(hr>12)
            printf("%d:%d PM\n", hr-12, min);
        else if(hr==12)
            printf("%d:%d PM\n", hr, min);
        else
            printf("%d:%d AM\n", hr, min); 
    }

    return 0;
}